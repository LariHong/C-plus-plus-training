#include <iostream>
using namespace std;
class A
{
	public:
		A(int v=0)
		:value(v)
		{
		}
		void print()
		{
			cout<<"value= "<<value<<endl;
		}
	private:
		int value;	
};
class B
{
	public:
		B(int v=0)
		:ptr(new A(v))
		{
		}
		void displaymessage()
		{
			ptr->print();
		}
		~B()
		{
			delete ptr;
		}
	private:
		A *ptr;	
};
int main(int argc, char** argv) 
{
	cout<<"另一種class \n"<<endl;
	{
		B test;
		cout<<"初始狀態"<<endl;
		test.displaymessage();
		cout<<"\n給100值"<<endl;
		B test1(100);
		test1.displaymessage();	
	}
	system("pause");
}
