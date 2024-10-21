#include <iostream>
using namespace std;

template <typename T>  //template <class T> ¤@¼Ë·N«ä 
void print (T* array,int c)
{
	for(int i=0; i<c; i++)
	{
		cout<<array[i]<<"|";
	}
	cout<<endl;
}


int main(int argc, char** argv) 
{
	int ac=3;
	int bc=5;
	int cc=5;
	
	int arrayA[ac]={1,2,3};
	float arrayB[bc]={1.1,2.2,3.3,4.4,5.5};
	char C[cc]="gogo";
	
	print(arrayA,ac);
	print(arrayB,bc);
	print(C,cc);
	
	system("pause");
}
