#include <iostream>
#include <string>
#include"B.h"
using namespace std;

int main(int argc, char** argv) 
{
	cout<<"(�~�Ӫ��d��)"<<endl<<endl;
	A test1;
	B test2;
	A test3(6,"3+3");
	B test4(10,"5+5");
	
	cout<<"��l���A"<<endl;
	test1.printA();
	test2.printB();
	cout<<"\n���Ȫ��A"<<endl;
	cout<<"A test3(6,\"3+3\")"<<endl;
	test3.printA();
	cout<<"B test4(4,\"2+2\")"<<endl;
	test4.printB();
	return 0;
}
