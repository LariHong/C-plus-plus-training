#include <iostream>
#include "point.h"
using namespace std;

int main(int argc, char** argv) 
{
	int name1=5;
	int name2=5;
	
	cout<<"name1= "<<name1<<"  name2= "<<name2<<"   &name2= "<<&name2<<endl;
	//先個別確認當前的狀況 &name2 是要記錄 值改變後 位置是不是會改變 
	
	name1=cube(name1);
	cout<<"\nAfter name1= "<<name1<<endl;
	cubeR(&name2);
	cout<<"\nname2= "<<name2<<"   &name2= "<<&name2<<endl;
	
	
	system("pause");
}


