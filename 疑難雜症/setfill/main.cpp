#include <iostream>
#include <iomanip>
using namespace std;



int main(int argc, char** argv) 
{
	int x;
	
	cout<<"setfill('c')<<setw(3) �����p"<<endl;
	
	cout<<"\n1. �p�G�S������3�ӼƦr�|�۰ʸ�c(�q����}�l)"<<endl;
	cout<<setfill('c')<<setw(3)<<1<<endl;
	cout<<setfill('c')<<setw(3)<<11<<endl;
	cout<<"\n2. �p�G������3�ӼƦr�|�̾ڥثe����X "<<endl;
	cout<<setfill('c')<<setw(3)<<111<<endl;
	cout<<setfill('c')<<setw(3)<<1111<<endl;
	
	cout<<"\n(�P�_��)?  x : y   (�����P�_������ ��x �_�h��y)"<<endl; 
	cout<<"�п�J�@�ӼƦr"<<endl; 
	cin>>x;
	
	cout<<"(-1<X<10)?x:88"<<endl;
	cout<<( (x<10 && x>-1)?x:88)<<endl;
	system("pause");
}


