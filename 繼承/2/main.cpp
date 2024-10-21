#include <iostream>
#include <string>
using namespace std;

class A
{
	public:
		A(int v=0,string s=" ")
		{
			cout<<"class A constructor"<<endl;
			setvalue(v);
			setstring(s);
		}
		~A()
		{
			cout<<"class A destructor"<<endl;
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
	protected:		//�򥻩M�l��class����s�� 
		int value;
	private:
		string st;	//��class�~��s�� 
};
class B:public A				//�~�Ӫ��g�k 
{
	public: 
		B(int v=0,string s=" ")
		{
			cout<<"class B constructor"<<endl;
			setvalue(v);
			setstring(s);
		}
		~B()
		{
			cout<<"class B destructor"<<endl;
		}
		void printB()
		{
			cout<<"class B:"<<endl;
			cout<<"value= "<<value<<endl;
			cout<<"string= "<<A::getstring()<<endl;	//�p�n����class��private �ncall function 
			cout<<"{\nA::printA()"<<endl;
			A::printA();
			cout<<"�]�{�b�OB��class\n}"<<endl;
		}
	private:
};
int main(int argc, char** argv) 
{
	cout<<"(�~�Ӫ��d��)"<<endl;
	cout<<"(�غc�l �Ѻc�l����)"<<endl<<endl;
	{	
		A test1;
		B test2;				//B�O�~��A  �ҥHconstructorA B���|�إ�  ���OA�|��B�� 
	
		cout<<"��l���A"<<endl;
		test1.printA();
		test2.printB();
	}
	
	cout<<"\n���Ȫ��A"<<endl;
	A test3(6,"3+3");
	B test4(4,"2+2");
	
	cout<<"A test3(6,\"3+3\")"<<endl;
	test3.printA();
	cout<<"B test4(4,\"2+2\")"<<endl;
	test4.printB();
	
	system("pause");
}
