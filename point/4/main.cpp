#include <iostream>
#include "sizeof.h"
using namespace std;


int main(int argc, char** argv) 
{
	int	array[20];
	double brray[30];
	
	cout<<"sizeof(int array[20]) (bytes):"<<sizeof(array)<<endl;
	//int 每個元素以4bytes來存放
	
	cout<<"\narray內個數:"<<sizeof(array)/sizeof(array[0])<<endl;	
	
	
	cout<<"\nsizeof(double brray[30]) (bytes):"<<sizeof(brray)<<endl;
	// double 每個元素以8bytes來存放
	
	cout<<"\nbrray內個數:"<<sizeof(brray)/sizeof(brray[0])<<endl;			
	
	
	cout<<"\nsizeof( cal(array) ) (bytes):"<<cala(array)<<endl;
	// 傳回的是ptra的bytes 不是全部array的大小 
	
	cout<<"\nsizeof( cal(brray) ) (bytes):"<<calb(brray)<<endl;
	// 傳回的是ptrb的bytes 不是全部brray的大小 
	
	system("pause");
}


