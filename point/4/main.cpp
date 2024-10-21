#include <iostream>
#include "sizeof.h"
using namespace std;


int main(int argc, char** argv) 
{
	int	array[20];
	double brray[30];
	
	cout<<"sizeof(int array[20]) (bytes):"<<sizeof(array)<<endl;
	//int –じ4bytesㄓ
	
	cout<<"\narrayず计:"<<sizeof(array)/sizeof(array[0])<<endl;	
	
	
	cout<<"\nsizeof(double brray[30]) (bytes):"<<sizeof(brray)<<endl;
	// double –じ8bytesㄓ
	
	cout<<"\nbrrayず计:"<<sizeof(brray)/sizeof(brray[0])<<endl;			
	
	
	cout<<"\nsizeof( cal(array) ) (bytes):"<<cala(array)<<endl;
	// 肚琌ptrabytes ぃ琌场array 
	
	cout<<"\nsizeof( cal(brray) ) (bytes):"<<calb(brray)<<endl;
	// 肚琌ptrbbytes ぃ琌场brray 
	
	system("pause");
}


