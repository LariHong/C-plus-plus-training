#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	int a;
	int *aptr;
	a=7;
	
	int *bptr=&a;				//�b�o�ثŧi�Ҧ��U   bptr=&a    *bptr=a; 
	aptr=&a;
	cout<<"�o�̬O�n�F�� ���Ъ����A\n\n"<<endl; 
	cout<<"a=7,aptr=&a  \n"<<endl;
	
	cout<<"\n&a= "<<&a<<"  aptr= "<<aptr<<"    &aptr= "<<&aptr<<"  *aptr= "<<*aptr<<endl;
	
	cout<<"\na= "<<a<<"          *&aptr= "<<*&aptr<<"  &*aptr= "<<&*aptr<<endl;
	
	cout<<"\n*bptr= "<<*bptr<<"      bptr= "<<bptr<<endl<<endl;
	
	
	
	system("pause");
}
