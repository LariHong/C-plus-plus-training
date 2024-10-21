#include <iostream>
#include <vector>
#include <typeinfo> // typeid(*array[0]).name() 使用 
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
	cout<<"有用到virtual func (有用多型) "<<endl; 
	
	X *xa=new A;
	cout<<"\nX *xa   xa為X的point型態  *xa 則看給值是啥來判斷"<<endl;
	cout<<typeid(xa).name()<<endl;
	cout<<typeid(*xa).name()<<endl;
	
	X *x=new X;
	cout<<"\nX *x    x為X的point型態  *x 則看給值是啥來判斷"<<endl;
	cout<<typeid(x).name()<<endl;
	cout<<typeid(*x).name()<<endl;
	
	cout<<"-----------------------------------------------------------------"<<endl;
	
	cout<<"沒用到virtual func (沒用多型) "<<endl; 
	
	nX *nxa=new nA;
	cout<<"\nnX *nxa   nxa為X的point型態  *nxa 則看宣告是甚麼型態"<<endl;
	cout<<typeid(nxa).name()<<endl;
	cout<<typeid(*nxa).name()<<endl;
	
	nX *nx=new nX;
	cout<<"\nnX *nx   nx為X的point型態  *nx 則看宣告是甚麼型態"<<endl;
	cout<<typeid(nx).name()<<endl;
	cout<<typeid(*nx).name()<<endl;
	
	system("pause");
}
