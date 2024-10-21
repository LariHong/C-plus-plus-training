#include <iostream>
#include <vector>
#include "vector.h"
using namespace std;

int main(int argc, char** argv) 
{
	vector<int> inte1(4);						//vector 類似array的存在 
	vector<int> inte2(5);
	
	cout<<"請輸入9個數 如超過9個數可以觀察"<<endl; 
	input(inte1);
	input(inte2);
	
	cout<<"inte1  "<<endl;
	output(inte1);
	cout<<"\ninte2  "<<endl;
	output(inte2);
	if(inte1!=inte2)
	{
		cout<<"\n不相同"<<endl; 		
		inte1=inte2;							//可以直接把比較小的vector 拿vector比較大的取代 
    	cout<<"\nAfter inte1  "<<endl;
		output(inte1);
		cout<<"\nAfter inte2  "<<endl;
		output(inte2);
	}	
	if(inte1==inte2)
	{
		cout<<"\n 相同"<<endl;
	}
	
	inte1[2]= 100000;							//可以把vector中其中的數字更改 
	cout<<"\n改值 After inte1  "<<endl;
	output(inte1);
	
	system("pause");
}


