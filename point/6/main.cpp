#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
	cout<<"���U�O �}�C�i�J���Ъ����A �٦����p\n\n"<<endl;
	int array[5];
	int *aptr=array;
	int *bptr=&array[0];
	
	cout<<"(int *aptr=array)   aptr(int)= "<<aptr<<endl;		
	cout<<"\n(int *bptr=&array[0])   bptr(int)= "<<bptr<<endl;
	// ���V�}�C���}�Y ���P���g�k 
	aptr=aptr+2;
	cout<<"\naptr+2(int)= "<<aptr<<endl;
	cout<<"\n&array[1](int)= "<<&array[1]<<endl;
	cout<<"\n&array[2](int)= "<<&array[2]<<endl<<endl<<endl;
	
	
	double brray[5];
	double *cptr=brray;
	double *dptr=&brray[0];
	
	cout<<"(double *cptr=brray)   cptr(double)= "<<cptr<<endl;
	cout<<"\n(double *dptr=&brray[0])   dptr(double)= "<<dptr<<endl;
	
	cptr=cptr+1;
	cout<<"\ncptr+1(double)= "<<cptr<<endl;
	cout<<"\n&brray[0](double)= "<<&brray[0]<<endl;
	cout<<"\n&brray[1](double)= "<<&brray[1]<<endl;
	
	
	
	system ("pause");
}
