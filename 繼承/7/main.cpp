#include <iostream>
#include <vector>
#include <typeinfo> // typeid(*array[0]).name() �ϥ� 
using namespace std;

class X
{
	public:
		X(int=0)
		{
		}
		virtual void mess()
		{
			cout<<"X mess()"<<endl;
		}
	protected:			
	private:	
};
class A:public X
{
	public:
		A(int=1)
		{
		}
		virtual void mess()
		{
			cout<<"A mess()"<<endl;
		}
	private:

};

class nX
{
	public:
		nX(int=0)
		{
		}
};
class nA:public nX
{
	public:
		nA(int=0)
		{
		}
};
int main(int argc, char** argv) 
{
	cout<<"���Ψ�virtual func (���Φh��) "<<endl; 
	
	X *xa=new A;
	cout<<"\nX *xa   xa��X��point���A  *xa �h�ݵ��ȬOԣ�ӧP�_"<<endl;
	cout<<typeid(xa).name()<<endl;
	cout<<typeid(*xa).name()<<endl;
	
	X *x=new X;
	cout<<"\nX *x    x��X��point���A  *x �h�ݵ��ȬOԣ�ӧP�_"<<endl;
	cout<<typeid(x).name()<<endl;
	cout<<typeid(*x).name()<<endl;
	
	cout<<"-----------------------------------------------------------------"<<endl;
	
	cout<<"�S�Ψ�virtual func (�S�Φh��) "<<endl; 
	
	nX *nxa=new nA;
	cout<<"\nnX *nxa   nxa��X��point���A  *nxa �h�ݫŧi�O�ƻ򫬺A"<<endl;
	cout<<typeid(nxa).name()<<endl;
	cout<<typeid(*nxa).name()<<endl;
	
	nX *nx=new nX;
	cout<<"\nnX *nx   nx��X��point���A  *nx �h�ݫŧi�O�ƻ򫬺A"<<endl;
	cout<<typeid(nx).name()<<endl;
	cout<<typeid(*nx).name()<<endl;
	
	system("pause");
}
