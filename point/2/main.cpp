#include <iostream>
#include "point.h"
using namespace std;

int main(int argc, char** argv) 
{
	int name1=5;
	int name2=5;
	
	cout<<"name1= "<<name1<<"  name2= "<<name2<<"   &name2= "<<&name2<<endl;
	//���ӧO�T�{��e�����p &name2 �O�n�O�� �ȧ��ܫ� ��m�O���O�|���� 
	
	name1=cube(name1);
	cout<<"\nAfter name1= "<<name1<<endl;
	cubeR(&name2);
	cout<<"\nname2= "<<name2<<"   &name2= "<<&name2<<endl;
	
	
	system("pause");
}


