#include <iostream>
using namespace std;

class Operator
{
	friend Operator operator+(Operator&,Operator&);				//���쪺operator 
	
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

Operator operator+(Operator& addv1,Operator& addv2)			// operator (�B�⤸) (&�B��l,&�B��l) 
{
	cout<<"addv1.value= "<<addv1.value<<endl;
	cout<<"addv2.value= "<<addv2.value<<endl;
	return addv1.value+addv2.value;
}


int main(int argc, char** argv) 
{
	Operator a(10);
	Operator b(20);
	
	cout<<"���U��operator ��@:"<<endl;
	
	cout<<"\na.displaymessage()  ��l����"<<endl;
	a.displaymessage();
	cout<<"\nb.displaymessage()  ��l����"<<endl;
	b.displaymessage();
	
	Operator c;
	cout<<"\nc.displaymessage()  ��l����"<<endl;
	c.displaymessage();
	
	cout<<"\na+b"<<endl;
	c=a+b;   //c=operator+(a,b);  �@�˪��N�� 			//���i�H������c �ӱ���a+b���� 
	
	cout<<"\na.displaymessage()   c=a+b��"<<endl;
	a.displaymessage();
	cout<<"\nb.displaymessage()   c=a+b��"<<endl;
	b.displaymessage();
	cout<<"\nc.displaymessage()   c=a+b��"<<endl;
	c.displaymessage();
	system("pause");
}
