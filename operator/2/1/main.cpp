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
	
	cout<<"以下是二元運算的多載:"<<endl;
	cout<<"\na.displaymessage()   初始值"<<endl;
	a.displaymessage();
	cout<<"\nb.displaymessage()   初始值"<<endl;
	b.displaymessage();
	
	Operator c;
	cout<<"\nc.displaymessage()   初始值"<<endl;
	c.displaymessage();
	cout<<"\na+b"<<endl;
	c=a+b;   		// c=a.operator+(b); 一樣的意思 
	
	cout<<"\na.displaymessage()   c=a+b後"<<endl;
	a.displaymessage();
	cout<<"\nb.displaymessage()   c=a+b後"<<endl;
	b.displaymessage();
	cout<<"\nc.displaymessage()   c=a+b後"<<endl;
	c.displaymessage();
	
	system("pause");
}
