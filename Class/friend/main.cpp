#include <iostream>
using namespace std;

class fri
{
	friend void test(fri & ,int);	//非此class 
	
	public:
		fri()
		:x(10) 
		{
			
		}
		void displaymessage()
		{
			cout<<x<<endl;
		}
	private:
		int x;
};

void test(fri & f,int a)
{
	
	f.x=a;
}


int main(int argc, char** argv) 
{
	fri t;
	cout<<"用這方法( fri():x(10) ) 給初始值"<<endl; 
	t.displaymessage();
	cout<<"\n\n用這方法( friend void test(fri & ,int) ) 給private x值"<<endl; 
	test(t,100);
	t.displaymessage();
	
	system("pause");
}
