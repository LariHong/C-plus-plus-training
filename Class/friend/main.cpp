#include <iostream>
using namespace std;

class fri
{
	friend void test(fri & ,int);	//�D��class 
	
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
	cout<<"�γo��k( fri():x(10) ) ����l��"<<endl; 
	t.displaymessage();
	cout<<"\n\n�γo��k( friend void test(fri & ,int) ) ��private x��"<<endl; 
	test(t,100);
	t.displaymessage();
	
	system("pause");
}
