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
void temp2<double>::print()		//���]���Q�j�w��double �]���n+double 
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
	
	template<typename S>			//�]�����Oclass temp5�ҥH�n�b�ŧi�@��template 
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
	cout<<"<temp������>"<<endl;
	cout<<"\n---------------------------------"<<endl;
	cout<<"�@��temp���ϥ�"<<endl;
	
	cout<<"\n��l�ȳ]1.01 ���O��temp<int>"<<endl;
	temp<int> test0;
	test0.print();
	cout<<"\n��l�ȳ]1.01 ���O��temp<double>"<<endl;
	temp<double> test01;
	test01.print();
	
	cout<<"\n---------------------------------"<<endl;
	cout<<"������T�@�Ӫ�ltype"<<endl;
	
	cout<<"\n������T�@�Ӫ�ltype <int>"<<endl;
	temp1<> test1;
	test1.print();
	cout<<"\n������T�@�Ӫ�ltype <double>"<<endl;
	temp2<> test2;
	test2.print();
	
	cout<<"\n---------------------------------"<<endl;
	cout<<"�@�Ӽ˪O�S��Ʊ�����S�w���A(char)�ɨϥ�"<<endl;
	temp<char> test3;
	test3.print();
	
	cout<<"\n---------------------------------"<<endl;
	cout<<"�@��class ���˪O��friend���ϥ�"<<endl;
	temp4 test4;
	f4(test4);
	
	cout<<"\n---------------------------------"<<endl;
	cout<<"�˪Oclass�ϥ�friend"<<endl;
	cout<<"\nfriend�j <int>"<<endl;
	temp5<int> test5;
	test5.print();
	f5(test5);
	cout<<"\nfriend�j �˪O"<<endl;
	temp5<double> test6;
	test6.print();
	f6(test6);
	
    return 0;
}
