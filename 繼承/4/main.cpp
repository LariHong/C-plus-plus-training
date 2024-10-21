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
		virtual void print()	//���F���t�ΧP�_�����O �l�����O��override�޳N 
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
			setvalue(v);
			setstring(s);
		}
		
		virtual void print()			//���F���t�ΧP�_�����O �l�����O��override�޳N 
		{
			cout<<"class B:"<<endl;
			cout<<"value= "<<value<<endl;
			cout<<"string= "<<A::getstring()<<endl;	//�p�n����class��private �ncall function 
			cout<<"{\nA::printA()"<<endl;
			A::print();
			cout<<"�]�{�b�OB��class\n}"<<endl;
		}
		
	private:
};
int main(int argc, char** argv) 
{
	cout<<"(�~�Ӫ��d��)"<<endl;
	cout<<"(virtual�Moverride)"<<endl<<endl;
	
	cout<<"��l���A"<<endl;
	A test1;
	B test2;
	test1.print();
	test2.print();
	
	cout<<"\n���Ȫ��A"<<endl;
	A test3(6,"3+3");
	A *aptr=0;						
	B test4(4,"2+2");
	B *bptr=0;
	
	cout<<"A test3(6,\"3+3\")"<<endl;
	test3.print();
	cout<<"B test4(4,\"2+2\")"<<endl;
	test4.print();
	
	aptr=&test3;
	cout<<"\n(�@)aptr=&test3(class A)"<<endl;
	aptr->print();
	
	aptr=&test4;
	cout<<"(�G)aptr=&test4(class B)"<<endl;
	cout<<"(���B���h�����u���}�l����)"<<endl;
	aptr->print();		//���B���h�����u���}�l���� 

	/*
	bptr=&test3;
	cout<<"(�T)bptr=&test3"<<endl;
	bptr->print();
	*/
	
	bptr=&test4;
	cout<<"(�|)bptr=&test4(class B)"<<endl;
	bptr->print();
	
	
	cout<<"\n�]�i�H�o�˫ŧi"<<endl; 
	A *test5=new B(10,"5+5");
	test5->print();
	
	system("pause");
}
