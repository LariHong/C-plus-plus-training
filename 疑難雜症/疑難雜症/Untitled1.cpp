#include <iostream>
#include <string>
using namespace std;

void a(string);
string b(string);

int main(int argc, char** argv) 
{
	cout<<"a(jack) 會先到 a()再到b()"<<endl;
	a("jack");
	cout<<"\n直接拿b()"<<endl;
	b("jack1");
	system("pause");
}

void a (string na)
{
	b(na);
}

string b(string name) 			//string... 有回傳型態的 放return會比較好   不要在內部放 
{	
	cout<<name<<endl;						    //太多計算 輸出等... 
	return name;					//int 比較不會有這問題 
}
