#include <iostream>
#include <string>
#include"A.h"
using namespace std;

class B:public A				//�~�Ӫ��g�k 
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
			cout<<"string= "<<A::getstring()<<endl;	//�p�n����class��private �ncall function 
			cout<<"{\nA::printA()"<<endl;
			A::printA();
			cout<<"�]�{�b�OB��class\n}"<<endl;
		}
	private:
};
