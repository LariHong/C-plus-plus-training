#include <iostream>
using namespace std;
#define n 10

int main() 
{
	char a[n]="";
	cin>>a;
	a[0]=a[0]/10;
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]= "<<a[i]<<endl;
	}
	return 0;
}
