#include <iostream>
#include <stdexcept> //exception 函式庫 
#include <new>		 //bad_alloc ane set_new_handler 
#include <cstdlib>   //abort()所需 
#include <memory>    //auto_ptr所需
 
using namespace std;

void Newhandler()
{
	cerr<<"Newhandler was called";
	abort(); //中止 
}
class DividebyZero 
{
	public:
		DividebyZero()
		{
			
		}
		
		DividebyZero(double a,double b)
		:v1(a),v2(b)
		{
			
		}
		void print()
		{
			if(v2==0)
			{
				throw "Divide by Zero";
			}
			
			cout<<v1/v2<<endl;
		}
	private:
		double v1;
		double v2;
};

class DividebyZero2 :public runtime_error//exception 函式庫 
{
	public:
		DividebyZero2():runtime_error("Divide by Zero")
		{
		}
		void print()
		{
			double a;
			double b;
			
			cout<<"輸入被除數 除數"<<endl; 
			while(cin>>a>>b)
			{
				if(b==0)
				{
					throw DividebyZero2();
				}
				cout<<a/b<<endl;
				cout<<"輸入被除數 除數"<<endl;
			}
		}
};

class Throwagain
{
	public:
		Throwagain()
		{
		}
		void print()throw(int) //只能丟int型態 
		{
			try
			{
				cout<<"throw 1 in Throwagain"<<endl;
				throw 1;
			}
			catch(...) //任何型態都接 
			{
				cout<<"catch 1 in Throwagain"<<endl;
				throw; //丟catch接到的型態 
			}
		}
};

class Nestedfunc
{
	public:
		f3()
		{
			cout<<"f3() in Nestedfunc"<<endl;
			throw 1;
		}
		f2()
		{
			cout<<"f2() in Nestedfunc"<<endl;
			f3();
			cout<<1; //因為throw 所以底下都被砍掉 
		}
		f1()
		{
			cout<<"f1() in Nestedfunc"<<endl;
			f2();
		}
		void print()
		{
			cout<<"print in Nestedfunc"<<endl;
			f1();
		}
};

class Nestedclass
{
	public:
		Nestedclass()
		{
			cout<<"Nestedclass() in Nestedclass"<<endl;
			 
		}
		Nestedclass(int i)
		{
			
			cout<<"Nestedclass(int) in Nestedclass"<<endl;
			throw "Fail";
		}
		Nestedclass(int i1,int i2):Nestedclass(i1)
		{

			cout<<"Nestedclass(int,int) in Nestedclass"<<endl;
			//throw "success";
		}
		Nestedclass(int int1,int int2,int int3):Nestedclass(int1,int2)
		{
			
			cout<<"Nestedclass(int,int,int) in Nestedclass"<<endl;
			//throw "success";
		}
		~Nestedclass()
		{
			cout<<"destructor"<<endl;
		} 
};

class New
{
	public:
		
		
		void print1()
		{
			cout<<"\n實作new失敗且記憶體不足時 會丟出一個bad_alloc"<<endl; 
			double *ptr[50];
			try
			{
				for(int i=0;i<50;i++)
				{
					ptr[i]=new double[5000000000];	//new失敗丟bad_alloc 
					//ptr[i]=new(nothrow) double[50];  //不丟bad_alloc 丟0 
					cout<<"ptr["<<i<<"]"<<endl;
				}
			}
			catch(bad_alloc& b)
			{
				cerr<<b.what()<<endl;
			}
		}
		
		void print2()
		{
			cout<<"\n實作new失敗且記憶體不足時 改以set_new_handler(Newhandler)"<<endl;
			cout<<"讓Newhandler來處理錯誤的情況"<<endl; 
			double *aptr[50];
			set_new_handler(Newhandler);
			for(int i=0;i<50;i++)
			{
				aptr[i]=new double[5000000000];	//new失敗丟給set_new_handler(Newhandler)   
				cout<<"aptr["<<i<<"]"<<endl;
			}
		}
};

class Autoptr
{
	public:
		Autoptr(int i):v(i)
		{
			cout<<"constructor for value "<<v<<endl;
		}
		~Autoptr()
		{
			cout<<"destructor for value "<<v<<endl;
		}
		void setvalue(int i)
		{
			v=i;
		}
		int getvalue()const
		{
			return v;
		}
		
		
		getantoptr(auto_ptr<Autoptr> p)
		{
			if(p.get()==NULL)
			{
				cout<<"空"<<endl; 
			}
			else
			{
				cout<<p.get()<<endl<<endl;
			}
		}
		
		
		void print()
		{
			cout<<"\nauto_ptr<Autoptr> ptr(new Autoptr(10000))"<<endl;
			auto_ptr<Autoptr> ptr(new Autoptr(10000));
			getantoptr(ptr);
		}
		
	private:
		int v;
			
};

int main(int argc, char** argv) 
{
	cout<<"Exception 實作:"<<endl;
	try
	{
		cout<<"\n實作除0"<<endl;
		cout<<"\n10/3=";
		DividebyZero test1(10,3);
		test1.print();
		
		cout<<"\n10/0=";
		DividebyZero test2(10,0);
		test2.print();	
	}
	catch(const char* s)  
	{
		cout<<s<<endl;
	}
	
	try
	{
		cout<<"\n使用include <stdexcept> 且繼承 runtime_error"<<endl;
		DividebyZero2 test3; //初始建構子就會寫入錯誤狀況給 runtime_error
		test3.print();
	}
	catch(DividebyZero2& d)
	{
		cout<<d.what()<<endl; //使用到 runtime_error的成員 .what() 
	}
	
	try
	{
		cout<<"\n實作throw多次"<<endl;
		Throwagain test4;
		test4.print();
	}
	catch(int i)
	{
		cout<<"catch "<<i<<" in main"<<endl;
	}
	
	
	try
	{
		cout<<"\n了解巢狀函式 throw會從底層慢慢的往上丟 直到遇到catch"<<endl;
		Nestedfunc test5;
		test5.print();
	}
	catch(int)
	{
		cout<<"catch from Nestedfunc"<<endl;
	}
	
	try
	{
		cout<<"\n了解巢狀建構 如果最底層建構失敗 則不會解構"<<endl;
		Nestedclass test6(1,2,3);
	}
	catch(const char* s)
	{
		cout<<s<<endl;
	}
	
	New test7;
	//test7.print1();
	//test7.print2();
	
	cout<<"\nauto_ptr 實作:"<<endl;
	
	auto_ptr<Autoptr> test8(new Autoptr(100));
	test8->setvalue(10); //因test8為位址所以用-> 
	cout<<(*test8).getvalue()<<endl;  
	
	cout<<"\n如果是使用auto_ptr<Autoptr> test10(test9)"<<endl;
	cout<<"\n則test10不會再建立一個建構子"<<endl;
	auto_ptr<Autoptr> test9(new Autoptr(9));
	auto_ptr<Autoptr> test10(test9);
	
	auto_ptr<Autoptr> test11(new Autoptr(11));
	auto_ptr<Autoptr> test12(new Autoptr(12));
	
	cout<<"\n如果是使用test11=test12"<<endl;
	cout<<"\ntest11的建構子會被清除且test12指向test11"<<endl;
	test11=test12;
	cout<<test11->getvalue()<<endl;
	
	cout<<"\nauto_ptr傳值:"<<endl;
	Autoptr test13(21);
	test13.print();
	
	
	return 0;
}
