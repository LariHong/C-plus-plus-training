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
class B:public A				
{
	public: 
		B(int=2)
		{
		}
		virtual void mess()
		{
			cout<<"B mess()"<<endl;
		}
	private:
};
class C		
{
	public: 
		C(int=3)
		{
		}

	private:
};
int main(int argc, char** argv) 
{
	cout<<"dynamic_cast �Mtypeid(*array[0]).name() �d��"<<endl;
	cout<<"***�@�w�n�O�h���~����]�X���T���G***"<<endl; 
	X test0(3);
	A test1(6);
	B test2(9);
	C test3(12);
	
	vector <X*> array(3);
	array[0]=&test0;
	array[1]=&test1;
	array[2]=&test2;
	//array[]=&test3;  			�Mclass S ���P�L�k�i�J 
	
	cout<<"\n\n<�૬>"<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"���B�����N�নclass X<�p�G���ȥN��X������>"<<endl;
	X* a0 = dynamic_cast<X*>(array[0]);
	X* a1 = dynamic_cast<X*>(array[1]);
	X* a2 = dynamic_cast<X*>(array[2]);
	
	cout<<"a0= "<<a0<<endl;
	cout<<"a0->mess()=  ";
	a0->mess();
	cout<<"a1= "<<a1<<endl;
	cout<<"a1->mess()=  ";
	a1->mess();
	cout<<"a2= "<<a2<<endl;
	cout<<"a2->mess()=  ";
	a2->mess();
	
	cout<<"-----------------------------------------------"<<endl;
	cout<<"���A "<<endl;
	
	cout<<"\narray�����A"<<endl;
	cout<<"array[0]= "<<typeid(*array[0]).name()<<endl;
	cout<<"array[1]= "<<typeid(*array[1]).name()<<endl;
	cout<<"array[2]= "<<typeid(*array[2]).name()<<endl;
	
	cout<<"\nX* a0,a1,a2 ��X��point���A"<<endl; 
	cout<<"a0= "<<typeid(a0).name()<<endl;
	cout<<"a1= "<<typeid(a1).name()<<endl;
	cout<<"a2= "<<typeid(a2).name()<<endl;
	
	cout<<"\n*a0,*a1,*a2 �̾� dynamic_cast<X*>(array)�� array�����A "<<endl; 
	cout<<"*a0= "<<typeid(*a0).name()<<endl;
	cout<<"*a1= "<<typeid(*a1).name()<<endl;
	cout<<"*a2= "<<typeid(*a2).name()<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	
	cout<<"���B�����N�নclass A<�p�G���ȥN��A������>"<<endl;
	A* a3 = dynamic_cast<A*>(array[0]);
	A* a4 = dynamic_cast<A*>(array[1]);
	A* a5 = dynamic_cast<A*>(array[2]);
	
	cout<<"a3= "<<a3<<endl;
	cout<<"a3��class X ���OA������ "<<endl;//a3->mess();
	cout<<"a4= "<<a4<<endl;
	cout<<"a4->mess()=  ";
	a4->mess();
	cout<<"a5= "<<a5<<endl;
	cout<<"a5->mess()=  ";
	a5->mess();
	
	cout<<"-----------------------------------------------"<<endl;
	cout<<"���A "<<endl;
	
	cout<<"\narray�����A"<<endl;
	cout<<"array[0]= "<<typeid(*array[0]).name()<<endl;
	cout<<"array[1]= "<<typeid(*array[1]).name()<<endl;
	cout<<"array[2]= "<<typeid(*array[2]).name()<<endl;
	
	cout<<"\nA* a3,a4,a5 ��A��point���A"<<endl; 
	cout<<"a3= "<<typeid(a3).name()<<endl;
	cout<<"a4= "<<typeid(a4).name()<<endl;
	cout<<"a5= "<<typeid(a5).name()<<endl;
	
	cout<<"\n*a3,*a4,*a5 �̾� dynamic_cast<A*>(array)�� array�����A "<<endl;
	cout<<"*a3��class X ���OA������ "<<endl;
	cout<<"*a4= "<<typeid(*a4).name()<<endl;
	cout<<"*a5= "<<typeid(*a5).name()<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	
	cout<<"���B�����N�নclass B<�p�G���ȥN��B������>"<<endl;
	B* a6 = dynamic_cast<B*>(array[0]);
	B* a7 = dynamic_cast<B*>(array[1]);
	B* a8 = dynamic_cast<B*>(array[2]);
	
	cout<<"a6= "<<a6<<endl;
	cout<<"a6��class X ���OB������ "<<endl;//a6->mess();
	cout<<"a7= "<<a7<<endl;
	cout<<"a7��class A ���OB������ "<<endl;//a7->mess();
	cout<<"a8= "<<a8<<endl;
	cout<<"a8->mess()=  ";
	a8->mess();
	
	cout<<"-----------------------------------------------"<<endl;
	cout<<"���A "<<endl;
	
	cout<<"\narray�����A"<<endl;
	cout<<"array[0]= "<<typeid(*array[0]).name()<<endl;
	cout<<"array[1]= "<<typeid(*array[1]).name()<<endl;
	cout<<"array[2]= "<<typeid(*array[2]).name()<<endl;
	
	cout<<"\nB* a6,a7,a8 ��B��point���A"<<endl; 
	cout<<"a6= "<<typeid(a6).name()<<endl;
	cout<<"a7= "<<typeid(a7).name()<<endl;
	cout<<"a8= "<<typeid(a8).name()<<endl;
	
	cout<<"\n*a6,*a7,*a8 �̾� dynamic_cast<B*>(array)�� array�����A "<<endl;
	cout<<"*a6��class X ���OB������"<<endl;
	cout<<"*a7��class A ���OB������"<<endl;
	cout<<"*a8= "<<typeid(*a8).name()<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	
	system("pause");
}
