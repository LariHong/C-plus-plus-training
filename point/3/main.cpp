#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
	int x=7;
	const int a=100;
	int const b=100;
	//�W����ر��p���ۦP �Q�w�ȫ� �N�����F
	// a=99; b=99; ������h����
	
	
								//4��const �t�W���� 
	int *aptr;       			//1�ƻ򳣨S��
	
	const int *bptr;			//2 const (int *bptr)    *bptr������  ���O bptr�i�H���
	
	
	int *const cptr=&x;			//3 int ( *const cptr) 	 *cptr����  ���O cptr���i���
	
	const int *const dptr=&x;	//4 (const int (*const dptr))   *dptr������  �] dptr���i���
	 
	
	system("pause");
}
