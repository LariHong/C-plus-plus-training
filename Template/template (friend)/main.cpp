#include <iostream>
using namespace std;

template <typename T>
class temp
{
	public:
		temp(T v=1.01)
		:value(v)
		{
		}
		void print()
		{
			cout<<"temp value= "<<value<<endl;
		}
	private:
		T value;
};

template <typename T=int>
class temp1
{
	public:
		temp1(T v=1.1)
		:value(v)
		{
		}
		void print()
		{
			cout<<"temp1 value= "<<value<<endl;
		}
	private:
		T value;
};

template <typename T=double>
class temp2
{
	public:
		temp2(T v=1.2)
		:value(v)
		{
		}
		void print();
	private:
		T value;
};

template <>
class temp<char>
{
	public:
		temp(char c='0')
		:Char(c)
		{
			va=3;
		}
		void print()
		{
			cout<<"temp"<<va<<" Char= "<<Char<<endl;
		}
	private:
		char Char;
		int va;
};

class temp4
{
		friend void f4(temp4&);
		friend void temp2<double>::print();
	public:
		temp4(double v=1.4)
		:value(v)
		{
		}
		void print()
		{
			cout<<"temp4 value= "<<value<<endl;
		}
	private:
		double value;
};

template <>
void temp2<double>::print()		//此因為被綁定成double 因此要+double 
{
	cout<<"temp2 value= "<<value<<endl;

}

void f4(temp4& f)
{
	cout<<"temp4 f4() value= "<<f.value<<endl;
}

template<typename T>
class temp5
{
	friend void f5(temp5<int>&);
	
	template<typename S>			//因為不是class temp5所以要在宣告一個template 
	friend void f6(temp5<S>&);
	
	public:
		temp5(T v=1.5)
		:value(v)
		{
		}
		void print()
		{
			cout<<"temp5 value= "<<value<<endl;
		}
	private:
		T value;	
};


void f5(temp5<int>& f)
{
	cout<<"temp5 f5() int value= "<<f.value<<endl;
}


template<typename T>
void f6(temp5<T>&f) 
{
	cout<<"temp5 f6() T value= "<<f.value<<endl;
}

int main()
{
	cout<<"<temp的應用>"<<endl;
	cout<<"\n---------------------------------"<<endl;
	cout<<"一般temp的使用"<<endl;
	
	cout<<"\n初始值設1.01 但是用temp<int>"<<endl;
	temp<int> test0;
	test0.print();
	cout<<"\n初始值設1.01 但是用temp<double>"<<endl;
	temp<double> test01;
	test01.print();
	
	cout<<"\n---------------------------------"<<endl;
	cout<<"直接給T一個初始type"<<endl;
	
	cout<<"\n直接給T一個初始type <int>"<<endl;
	temp1<> test1;
	test1.print();
	cout<<"\n直接給T一個初始type <double>"<<endl;
	temp2<> test2;
	test2.print();
	
	cout<<"\n---------------------------------"<<endl;
	cout<<"一個樣板特殊化接受到特定型態(char)時使用"<<endl;
	temp<char> test3;
	test3.print();
	
	cout<<"\n---------------------------------"<<endl;
	cout<<"一般class 拿樣板當friend的使用"<<endl;
	temp4 test4;
	f4(test4);
	
	cout<<"\n---------------------------------"<<endl;
	cout<<"樣板class使用friend"<<endl;
	cout<<"\nfriend綁 <int>"<<endl;
	temp5<int> test5;
	test5.print();
	f5(test5);
	cout<<"\nfriend綁 樣板"<<endl;
	temp5<double> test6;
	test6.print();
	f6(test6);
	
    return 0;
}
