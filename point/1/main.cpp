#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	int a;
	int *aptr;
	a=7;
	
	int *bptr=&a;				//在這種宣告模式下   bptr=&a    *bptr=a; 
	aptr=&a;
	cout<<"這裡是要了解 指標的狀態\n\n"<<endl; 
	cout<<"a=7,aptr=&a  \n"<<endl;
	
	cout<<"\n&a= "<<&a<<"  aptr= "<<aptr<<"    &aptr= "<<&aptr<<"  *aptr= "<<*aptr<<endl;
	
	cout<<"\na= "<<a<<"          *&aptr= "<<*&aptr<<"  &*aptr= "<<&*aptr<<endl;
	
	cout<<"\n*bptr= "<<*bptr<<"      bptr= "<<bptr<<endl<<endl;
	
	
	
	system("pause");
}
