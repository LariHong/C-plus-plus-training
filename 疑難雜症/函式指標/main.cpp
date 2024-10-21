#include <iostream>
using namespace std;

void test(int[],bool(*)(int,int));

bool equornot(int,int);
int add(int,int);

int main(int argc, char** argv) 
{
	
	int array[2];
	int (*test2)(int,int); 
	
	cout<<"請輸入兩個數字"<<endl;
	 
	cin>>array[0];
	cin>>array[1];
	
	cout<<"\narray[0]= "<<array[0]<<endl;
	cout<<"array[1]= "<<array[1]<<endl<<endl;;  
	test(array,equornot);
	
	
	test2=add;
	cout<<"\n此處是宣告一個函式指標( int (*test2)(int,int) ) 再把 tes2接收add的Func"<<endl;
	cout<<"輸出兩個數的相加= "<<add(array[0],array[1])<<endl;
	
	system("pause");
}

void test(int a[], bool (*ttt)(int,int))
{
	if((*ttt)(a[0],a[1]))
	{
		cout<<"array[0]==array[1]"<<endl;
	}
	else
	{
		cout<<"array[0]!=array[1]"<<endl;
	}
}

bool equornot(int a1,int a2)
{
	return a1==a2;
}


int add(int a1,int a2)
{
	
	return a1+a2;
}


