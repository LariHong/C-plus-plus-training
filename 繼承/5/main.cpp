#include <iostream>
#include <string>
using namespace std;

class S
{
	public:
		void setvalue(int sv)
		{
			value=sv;
		}
		int getvalue()
		{
			return value;
		}
		void setstring(string sst)
		{
			st=sst;
		}
		string getstring()const
		{
			return st;
		}
		virtual void print()const=0;	//pure virtual function base class 不實作 
	protected:		//基本和衍生class都能存取 
		int value;
	private:
		 string st;	//基本class才能存取 
		
};
class A:public S
{
	public:
		A(int v=0,string s=" ")
		{
			setvalue(v);
			setstring(s);
		}
		
		virtual void print()const	//為了讓系統判斷基本類別 衍生類別的override技術 	要實作
		{
			cout<<"class A:\n"<<"value= "<<value<<"\nstring= "<<S::getstring()<<endl<<endl;
		}
	private:

};
class B:public A				//繼承的寫法 
{
	public: 
		B(int v=0,string s=" ")
		{
			setvalue(v);
			setstring(s);
		}
		
		virtual void print()const			//為了讓系統判斷基本類別 衍生類別的override技術  要實作 
		{
			cout<<"class B:"<<endl;
			cout<<"value= "<<value<<endl;
			cout<<"string= "<<S::getstring()<<endl;	//如要拿基本class的private 要call function  此處會加S::原因是要提醒分開要打S:: 
			cout<<"{\nA::printA()"<<endl;
			A::print();
			cout<<"因現在是B的class\n}"<<endl;
		}
		
	private:
};
int main(int argc, char** argv) 
{
	cout<<"(繼承的範例)"<<endl;
	cout<<"(pure virtual)"<<endl<<endl;
	
	cout<<"初始狀態"<<endl;
	A test1;
	B test2;
	test1.print();
	test2.print();
	
	cout<<"\n給值狀態"<<endl;
	A test3(6,"3+3");
	A *aptr=0;						
	B test4(4,"2+2");
	B *bptr=0;
	
	cout<<"A test3(6,\"3+3\")"<<endl;
	test3.print();
	cout<<"B test4(4,\"2+2\")"<<endl;
	test4.print();
	
	aptr=&test3;
	cout<<"\n(一)aptr=&test3(class A)"<<endl;
	aptr->print();
	
	aptr=&test4;
	cout<<"(二)aptr=&test4(class B)"<<endl;
	cout<<"(此處為多型的真正開始應用)"<<endl;
	aptr->print();		//此處為多型的真正開始應用 

	/*
	bptr=&test3;
	cout<<"(三)bptr=&test3"<<endl;
	bptr->print();
	*/
	B test5(10,"5+5");
	bptr=&test5;
	cout<<"(四)bptr=&test4(class B)"<<endl;
	bptr->print();
	
	
	cout<<"\n也可以這樣宣告"<<endl; 
	A *test6=new B(12,"6+6");
	test6->print();
	
	delete test6;
	system("pause");
}
