#include <iostream>
#include <string>
using namespace std;

class A
{
	public:
		A(int v=0,string s=" ")
		{
			setvalue(v);
			setstring(s);
		}
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
		string getstring()
		{
			return st;
		}
		void printA()
		{
			cout<<"class A:\n"<<"value= "<<value<<"\nstring= "<<st<<endl<<endl;
		}
	protected:		//基本和衍生class都能存取 
		int value;
	private:
		string st;	//基本class才能存取 
};
class B:public A				//繼承的寫法 
{
	public: 
		B(int v=0,string s=" ")
		{
			setvalue(v);
			setstring(s);
		}
		void printB()
		{
			cout<<"class B:"<<endl;
			cout<<"value= "<<value<<endl;
			cout<<"string= "<<A::getstring()<<endl;	//如要拿基本class的private 要call function 
			cout<<"{\nA::printA()"<<endl;
			A::printA();
			cout<<"因現在是B的class\n}"<<endl;
		}
	private:
};
int main(int argc, char** argv) 
{
	cout<<"(繼承的範例)"<<endl<<endl;
	A test1;
	B test2;
	A test3(6,"3+3");
	B test4(4,"2+2");
	
	cout<<"初始狀態"<<endl;
	test1.printA();
	test2.printB();
	cout<<"\n給值狀態"<<endl;
	cout<<"A test3(6,\"3+3\")"<<endl;
	test3.printA();
	cout<<"B test4(4,\"2+2\")"<<endl;
	test4.printB();
	return 0;
}
