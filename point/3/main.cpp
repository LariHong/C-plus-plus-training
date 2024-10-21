#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
	int x=7;
	const int a=100;
	int const b=100;
	//ㄢ贺薄猵常 砆﹚ 碞ぃэ
	// a=99; b=99; 常ぃэ
	
	
								//4贺const 皌夹 
	int *aptr;       			//1或常⊿Τ
	
	const int *bptr;			//2 const (int *bptr)    *bptrぃэ  琌 bptrэ
	
	
	int *const cptr=&x;			//3 int ( *const cptr) 	 *cptrэ  琌 cptrぃэ
	
	const int *const dptr=&x;	//4 (const int (*const dptr))   *dptrぃэ   dptrぃэ
	 
	
	system("pause");
}
