#include <iostream>
#include "def.h"
#include <string>
using namespace std;

int main(int argc, char** argv) 
{
	cout<<"以下再介紹建構子的初始化"<<endl; 
	cout<<"\ndef aaa"<<endl;
	def aaa;
	cout<<"def(100,s,hello)"<<endl;
	def bbb( 100 , 's' ,"hello");
	system("pause");
}
