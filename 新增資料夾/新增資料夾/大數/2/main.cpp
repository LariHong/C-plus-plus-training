#include <iostream>
using namespace std;
#define number 10000
int Fibonaccimod(int fn)
{
	int Fibmodarray[15000];
	
	if(fn<0)
	{
		Fibmodarray[fn]=0;
	}
	
	Fibmodarray[0]=0;
	Fibmodarray[1]=1;
	
	for(int i=2; i<=fn; i++)
	{
		Fibmodarray[i]=Fibmodarray[i-1]%10000+Fibmodarray[i-2]%10000;
	}
	
	return Fibmodarray[fn]%10000;
}
int main() 
{
	char a[number]="";
	
	cin>>a;

	int numbermod=0;
	
    for (int i=0; i<number; i++)
    {
    	if(a[i]!='\0')
    	{
    		numbermod = numbermod * 10 + a[i]-48;
        	numbermod %= 15000;
		}
    }
    
    cout<<"\nF(n)%10000= "<<Fibonaccimod(numbermod);
	system("pause");
}
