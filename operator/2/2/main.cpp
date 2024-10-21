#include <iostream>
using namespace std;

class Operator
{
	friend Operator operator+(Operator&,Operator&);				//全域的operator 
	
	public:
		Operator(int=0);

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

Operator operator+(Operator& addv1,Operator& addv2)			// operator (運算元) (&運算子,&運算子) 
{
	cout<<"addv1.value= "<<addv1.value<<endl;
	cout<<"addv2.value= "<<addv2.value<<endl;
	return addv1.value+addv2.value;
}


int main(int argc, char** argv) 
{
	Operator a(10);
	Operator b(20);
	
	cout<<"底下為operator 實作:"<<endl;
	
	cout<<"\na.displaymessage()  初始的值"<<endl;
	a.displaymessage();
	cout<<"\nb.displaymessage()  初始的值"<<endl;
	b.displaymessage();
	
	Operator c;
	cout<<"\nc.displaymessage()  初始的值"<<endl;
	c.displaymessage();
	
	cout<<"\na+b"<<endl;
	c=a+b;   //c=operator+(a,b);  一樣的意思 			//此可以直接讓c 來接收a+b的值 
	
	cout<<"\na.displaymessage()   c=a+b後"<<endl;
	a.displaymessage();
	cout<<"\nb.displaymessage()   c=a+b後"<<endl;
	b.displaymessage();
	cout<<"\nc.displaymessage()   c=a+b後"<<endl;
	c.displaymessage();
	system("pause");
}
