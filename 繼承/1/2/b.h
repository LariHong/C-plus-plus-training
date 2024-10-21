#include <iostream>
#include <string>
#include"A.h"
using namespace std;

class B:public A				//繼承的寫法 
{
	public: 
		B(int v=0,string s=" ")
		{
			setvalue(v);
			setstring(s);
		}
		void printB()
		{
			cout<<"class B:"<<endl;
			cout<<"value= "<<value<<endl;
			cout<<"string= "<<A::getstring()<<endl;	//如要拿基本class的private 要call function 
			cout<<"{\nA::printA()"<<endl;
			A::printA();
			cout<<"因現在是B的class\n}"<<endl;
		}
	private:
};
