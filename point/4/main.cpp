#include <iostream>
#include "sizeof.h"
using namespace std;


int main(int argc, char** argv) 
{
	int	array[20];
	double brray[30];
	
	cout<<"sizeof(int array[20]) (bytes):"<<sizeof(array)<<endl;
	//int �C�Ӥ����H4bytes�Ӧs��
	
	cout<<"\narray���Ӽ�:"<<sizeof(array)/sizeof(array[0])<<endl;	
	
	
	cout<<"\nsizeof(double brray[30]) (bytes):"<<sizeof(brray)<<endl;
	// double �C�Ӥ����H8bytes�Ӧs��
	
	cout<<"\nbrray���Ӽ�:"<<sizeof(brray)/sizeof(brray[0])<<endl;			
	
	
	cout<<"\nsizeof( cal(array) ) (bytes):"<<cala(array)<<endl;
	// �Ǧ^���Optra��bytes ���O����array���j�p 
	
	cout<<"\nsizeof( cal(brray) ) (bytes):"<<calb(brray)<<endl;
	// �Ǧ^���Optrb��bytes ���O����brray���j�p 
	
	system("pause");
}


