#include <iostream>
#include <vector>
#include "vector.h"
using namespace std;

int main(int argc, char** argv) 
{
	vector<int> inte1(4);						//vector ����array���s�b 
	vector<int> inte2(5);
	
	cout<<"�п�J9�Ӽ� �p�W�L9�Ӽƥi�H�[��"<<endl; 
	input(inte1);
	input(inte2);
	
	cout<<"inte1  "<<endl;
	output(inte1);
	cout<<"\ninte2  "<<endl;
	output(inte2);
	if(inte1!=inte2)
	{
		cout<<"\n���ۦP"<<endl; 		
		inte1=inte2;							//�i�H���������p��vector ��vector����j�����N 
    	cout<<"\nAfter inte1  "<<endl;
		output(inte1);
		cout<<"\nAfter inte2  "<<endl;
		output(inte2);
	}	
	if(inte1==inte2)
	{
		cout<<"\n �ۦP"<<endl;
	}
	
	inte1[2]= 100000;							//�i�H��vector���䤤���Ʀr��� 
	cout<<"\n��� After inte1  "<<endl;
	output(inte1);
	
	system("pause");
}


