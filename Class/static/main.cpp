#include <iostream>
using namespace std;

class statiC
{
	public:
		statiC(string="��");
		~statiC();
		static int getX();
		
	private:
		static int x;
};
								//static �u�൹�P�@��cpp�ϥ�   ��Lcpp����I�s�L 
int statiC::x=0;				//static �|�s�}�@�ӰO����N�ܼƦs��䤤  
int statiC::getX()				//static �p�G�bclass�����g �h�����n�bclass�~���A�ŧi�@���~�i�ϥ� 
{								//static �u��s��static���ܼ� 
	return x;
}
statiC::statiC(string a)
{
	++x;
	cout<<a<<endl;
}
statiC::~statiC()
{
	cout<<"~statiC()"<<endl;
	--x;
}

int main(int argc, char** argv) 
{
	cout<<"��l��X��= "<<statiC::getX()<<endl;
	
	{
		cout<<"\n��l�����A"<<endl; 
		
		statiC test;
		cout<<"\n��e��X��= "<<statiC::getX()<<endl;
		
		cout<<"\n�N123����"<<endl; 
		statiC test2("123");
		cout<<"\n��e��X��= "<<statiC::getX()<<endl<<endl<<endl;
	}
	cout<<"\ndestructor����᪺X��= "<<statiC::getX()<<endl;
	
	
	system("pause");
}
