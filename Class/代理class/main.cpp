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
	cout<<"�t�@��class \n"<<endl;
	{
		B test;
		cout<<"��l���A"<<endl;
		test.displaymessage();
		cout<<"\n��100��"<<endl;
		B test1(100);
		test1.displaymessage();	
	}
	system("pause");
}
