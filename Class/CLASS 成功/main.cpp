#include<iostream>
#include "test2.h"
using namespace std;

int main()
{
	ABC abc("123456777777777");
	ABC *p = new ABC;

	cout<<"\n"<<p<<endl;
	//cout<<"\n"<<<<endl;
	cout<<"\n"<<abc.gcn()<<endl;
	
	system("pause");
}
