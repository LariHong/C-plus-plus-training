#include <iostream>
using namespace std;

int A(int a)
{
	cout<<"a= "<<a<<endl;
}
int B(int* b)
{
	cout<<"b= "<<b<<endl;
}
int C(int& c)
{
	cout<<"c= "<<c<<endl;
}
int main()
{
	int n=10;
	A(n);
	B(&n);
	C(n);
	system("pause");
}

