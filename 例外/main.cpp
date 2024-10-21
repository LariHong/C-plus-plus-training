#include <iostream>
#include <stdexcept> //exception �禡�w 
#include <new>		 //bad_alloc ane set_new_handler 
#include <cstdlib>   //abort()�һ� 
#include <memory>    //auto_ptr�һ�
 
using namespace std;

void Newhandler()
{
	cerr<<"Newhandler was called";
	abort(); //���� 
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

class DividebyZero2 :public runtime_error//exception �禡�w 
{
	public:
		DividebyZero2():runtime_error("Divide by Zero")
		{
		}
		void print()
		{
			double a;
			double b;
			
			cout<<"��J�Q���� ����"<<endl; 
			while(cin>>a>>b)
			{
				if(b==0)
				{
					throw DividebyZero2();
				}
				cout<<a/b<<endl;
				cout<<"��J�Q���� ����"<<endl;
			}
		}
};

class Throwagain
{
	public:
		Throwagain()
		{
		}
		void print()throw(int) //�u���int���A 
		{
			try
			{
				cout<<"throw 1 in Throwagain"<<endl;
				throw 1;
			}
			catch(...) //���󫬺A���� 
			{
				cout<<"catch 1 in Throwagain"<<endl;
				throw; //��catch���쪺���A 
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
			cout<<1; //�]��throw �ҥH���U���Q�屼 
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
			cout<<"\n��@new���ѥB�O���餣���� �|��X�@��bad_alloc"<<endl; 
			double *ptr[50];
			try
			{
				for(int i=0;i<50;i++)
				{
					ptr[i]=new double[5000000000];	//new���ѥ�bad_alloc 
					//ptr[i]=new(nothrow) double[50];  //����bad_alloc ��0 
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
			cout<<"\n��@new���ѥB�O���餣���� ��Hset_new_handler(Newhandler)"<<endl;
			cout<<"��Newhandler�ӳB�z���~�����p"<<endl; 
			double *aptr[50];
			set_new_handler(Newhandler);
			for(int i=0;i<50;i++)
			{
				aptr[i]=new double[5000000000];	//new���ѥᵹset_new_handler(Newhandler)   
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
				cout<<"��"<<endl; 
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
	cout<<"Exception ��@:"<<endl;
	try
	{
		cout<<"\n��@��0"<<endl;
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
		cout<<"\n�ϥ�include <stdexcept> �B�~�� runtime_error"<<endl;
		DividebyZero2 test3; //��l�غc�l�N�|�g�J���~���p�� runtime_error
		test3.print();
	}
	catch(DividebyZero2& d)
	{
		cout<<d.what()<<endl; //�ϥΨ� runtime_error������ .what() 
	}
	
	try
	{
		cout<<"\n��@throw�h��"<<endl;
		Throwagain test4;
		test4.print();
	}
	catch(int i)
	{
		cout<<"catch "<<i<<" in main"<<endl;
	}
	
	
	try
	{
		cout<<"\n�F�ѱ_���禡 throw�|�q���h�C�C�����W�� ����J��catch"<<endl;
		Nestedfunc test5;
		test5.print();
	}
	catch(int)
	{
		cout<<"catch from Nestedfunc"<<endl;
	}
	
	try
	{
		cout<<"\n�F�ѱ_���غc �p�G�̩��h�غc���� �h���|�Ѻc"<<endl;
		Nestedclass test6(1,2,3);
	}
	catch(const char* s)
	{
		cout<<s<<endl;
	}
	
	New test7;
	//test7.print1();
	//test7.print2();
	
	cout<<"\nauto_ptr ��@:"<<endl;
	
	auto_ptr<Autoptr> test8(new Autoptr(100));
	test8->setvalue(10); //�]test8����}�ҥH��-> 
	cout<<(*test8).getvalue()<<endl;  
	
	cout<<"\n�p�G�O�ϥ�auto_ptr<Autoptr> test10(test9)"<<endl;
	cout<<"\n�htest10���|�A�إߤ@�ӫغc�l"<<endl;
	auto_ptr<Autoptr> test9(new Autoptr(9));
	auto_ptr<Autoptr> test10(test9);
	
	auto_ptr<Autoptr> test11(new Autoptr(11));
	auto_ptr<Autoptr> test12(new Autoptr(12));
	
	cout<<"\n�p�G�O�ϥ�test11=test12"<<endl;
	cout<<"\ntest11���غc�l�|�Q�M���Btest12���Vtest11"<<endl;
	test11=test12;
	cout<<test11->getvalue()<<endl;
	
	cout<<"\nauto_ptr�ǭ�:"<<endl;
	Autoptr test13(21);
	test13.print();
	
	
	return 0;
}
