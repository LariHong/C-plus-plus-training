#include <iostream>
using namespace std;


// 這裡主要是要說明 是甚麼型態所宣告的參數 他會照他的型態來安排位元組大小 
int main(int argc, char** argv) 
{
	char   		 c;
	short   	 s;
	int	   		 i;
	long   		 l;
	float  		 f;
	double       d;
	long double ld;
	int array[20];
	int *aptr=array;
	double brray[20];
	double *bptr=brray;
	cout<<"這裡主要是要說明 是甚麼型態所宣告的參數 他會照他的型態來安排位元組大小\n\n"<<endl;
	
	cout<<"sizeof c= "<<sizeof c<<"\t sizeof(char)= "<<sizeof(char)<<endl;
	cout<<"\nsizeof s= "<<sizeof s<<"\t sizeof(short)= "<<sizeof(short)<<endl;
	cout<<"\nsizeof i= "<<sizeof i<<"\t sizeof(int)= "<<sizeof(int)<<endl;
	cout<<"\nsizeof l= "<<sizeof l<<"\t sizeof(long)= "<<sizeof(long)<<endl;
	cout<<"\nsizeof f= "<<sizeof f<<"\t sizeof(float)= "<<sizeof(float)<<endl;
	cout<<"\nsizeof d= "<<sizeof d<<"\t sizeof(double)= "<<sizeof(double)<<endl;
	cout<<"\nsizeof ld= "<<sizeof ld<<"\t sizeof(long double)= "<<sizeof(long double)<<endl;
	cout<<"\nsizeof array(int)= "<<sizeof array<<endl;
	cout<<"\nsizeof aptr(int)= "<<sizeof aptr<<endl;
	cout<<"\nsizeof brray(double)= "<<sizeof brray<<endl;
	cout<<"\nsizeof bptr(double)= "<<sizeof bptr<<endl;
	
	
	system("pause");
}
