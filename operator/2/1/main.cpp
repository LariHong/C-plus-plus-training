#include <iostream>
using namespace std;

class Operator
{
	public:
		Operator(int=0);

		Operator operator+(Operator& addv)
		{
			Operator temp(value+addv.value); 
			
			cout<<"value= "<<value<<endl;
			cout<<"addv.value= "<<addv.value<<endl;
			return temp;	
		}
		
		void displaymessage()
		{
			cout<<"value= "<<value<<endl;
		}
	private:
		int value;
};

Operator::Operator(int a)
:value(a)
{
	
}


int main(int argc, char** argv) 
{
	Operator a(10);
	Operator b(20);
	
	cout<<"�H�U�O�G���B�⪺�h��:"<<endl;
	cout<<"\na.displaymessage()   ��l��"<<endl;
	a.displaymessage();
	cout<<"\nb.displaymessage()   ��l��"<<endl;
	b.displaymessage();
	
	Operator c;
	cout<<"\nc.displaymessage()   ��l��"<<endl;
	c.displaymessage();
	cout<<"\na+b"<<endl;
	c=a+b;   		// c=a.operator+(b); �@�˪��N�� 
	
	cout<<"\na.displaymessage()   c=a+b��"<<endl;
	a.displaymessage();
	cout<<"\nb.displaymessage()   c=a+b��"<<endl;
	b.displaymessage();
	cout<<"\nc.displaymessage()   c=a+b��"<<endl;
	c.displaymessage();
	
	system("pause");
}
