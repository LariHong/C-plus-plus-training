#include <iostream>
#include <iomanip>
#include "arrayOperator.h"
using namespace std;
int main(int argc, char** argv) 
{
	cout<<"類別的Array使用"<<endl; 
	arrayOperator test1(7);
	arrayOperator test2;
	
	cout<<"初起的test1"<<endl;
	cout<<test1;
	cout<<"初起的test2"<<endl;
	cout<<test2;
	cout<<"輸入12個數字 (少於或多於可觀察變化)"<<endl;
	cin >>test1>>test2;
	
	cout<<"輸入後 test1"<<endl;
	cout<<test1;
	cout<<"輸入後 test2"<<endl;
	cout<<test2;
	
	cout<<"判斷test1 == test2?"<<endl;
	if(test1 != test2)
	{
		cout<<"不相等"<<endl<<endl;
	}
	
	arrayOperator test3(test1);
	
	cout<<"test3 (將test1 複製給test3)"<<endl;
	cout<<test3;
	
	cout<<"將test2 用test1取代"<<endl;
	test2=test1;
	
	cout<<"取代後 test1"<<endl;
	cout<<test1;
	cout<<"取代後 test2"<<endl;
	cout<<test2;
	
	cout<<"判斷test1 == test2?"<<endl;	
	if(test1 == test2)
	{
		cout<<"相等"<<endl<<endl; 
	}
	
	cout<<"在符合test2的範圍給值(test2[2]=1000)"<<endl;
	test2[2]=1000;
	cout<<test2;
	
	cout<<"在不符合test2的範圍給值(test2[15]=10000)"<<endl;
	test2[15]=10000;
	
	system("pause");
}
