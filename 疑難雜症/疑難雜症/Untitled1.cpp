#include <iostream>
#include <string>
using namespace std;

void a(string);
string b(string);

int main(int argc, char** argv) 
{
	cout<<"a(jack) �|���� a()�A��b()"<<endl;
	a("jack");
	cout<<"\n������b()"<<endl;
	b("jack1");
	system("pause");
}

void a (string na)
{
	b(na);
}

string b(string name) 			//string... ���^�ǫ��A�� ��return�|����n   ���n�b������ 
{	
	cout<<name<<endl;						    //�Ӧh�p�� ��X��... 
	return name;					//int ������|���o���D 
}
