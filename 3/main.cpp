#include <iostream>
#include <iomanip>
#include "arrayOperator.h"
using namespace std;
int main(int argc, char** argv) 
{
	cout<<"���O��Array�ϥ�"<<endl; 
	arrayOperator test1(7);
	arrayOperator test2;
	
	cout<<"��_��test1"<<endl;
	cout<<test1;
	cout<<"��_��test2"<<endl;
	cout<<test2;
	cout<<"��J12�ӼƦr (�֩�Φh��i�[���ܤ�)"<<endl;
	cin >>test1>>test2;
	
	cout<<"��J�� test1"<<endl;
	cout<<test1;
	cout<<"��J�� test2"<<endl;
	cout<<test2;
	
	cout<<"�P�_test1 == test2?"<<endl;
	if(test1 != test2)
	{
		cout<<"���۵�"<<endl<<endl;
	}
	
	arrayOperator test3(test1);
	
	cout<<"test3 (�Ntest1 �ƻs��test3)"<<endl;
	cout<<test3;
	
	cout<<"�Ntest2 ��test1���N"<<endl;
	test2=test1;
	
	cout<<"���N�� test1"<<endl;
	cout<<test1;
	cout<<"���N�� test2"<<endl;
	cout<<test2;
	
	cout<<"�P�_test1 == test2?"<<endl;	
	if(test1 == test2)
	{
		cout<<"�۵�"<<endl<<endl; 
	}
	
	cout<<"�b�ŦXtest2���d�򵹭�(test2[2]=1000)"<<endl;
	test2[2]=1000;
	cout<<test2;
	
	cout<<"�b���ŦXtest2���d�򵹭�(test2[15]=10000)"<<endl;
	test2[15]=10000;
	
	system("pause");
}
