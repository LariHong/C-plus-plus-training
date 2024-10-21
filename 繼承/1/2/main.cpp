#include <iostream>
#include <string>
#include"B.h"
using namespace std;

int main(int argc, char** argv) 
{
	cout<<"(Ä~©Óªº½d¨Ò)"<<endl<<endl;
	A test1;
	B test2;
	A test3(6,"3+3");
	B test4(10,"5+5");
	
	cout<<"ªì©lª¬ºA"<<endl;
	test1.printA();
	test2.printB();
	cout<<"\nµ¹­Èª¬ºA"<<endl;
	cout<<"A test3(6,\"3+3\")"<<endl;
	test3.printA();
	cout<<"B test4(4,\"2+2\")"<<endl;
	test4.printB();
	return 0;
}
