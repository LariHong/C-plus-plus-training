#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
	int x=7;
	const int a=100;
	int const b=100;
	//上面兩種情況都相同 被定值後 就不能改了
	// a=99; b=99; 都不能去更改值
	
	
								//4種const 配上指標 
	int *aptr;       			//1甚麼都沒有
	
	const int *bptr;			//2 const (int *bptr)    *bptr不能更改  但是 bptr可以更改
	
	
	int *const cptr=&x;			//3 int ( *const cptr) 	 *cptr能更改  但是 cptr不可更改
	
	const int *const dptr=&x;	//4 (const int (*const dptr))   *dptr不能更改  也 dptr不可更改
	 
	
	system("pause");
}
