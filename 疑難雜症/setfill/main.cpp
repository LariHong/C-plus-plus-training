#include <iostream>
#include <iomanip>
using namespace std;



int main(int argc, char** argv) 
{
	int x;
	
	cout<<"setfill('c')<<setw(3) 的狀況"<<endl;
	
	cout<<"\n1. 如果沒有滿足3個數字會自動補c(從左邊開始)"<<endl;
	cout<<setfill('c')<<setw(3)<<1<<endl;
	cout<<setfill('c')<<setw(3)<<11<<endl;
	cout<<"\n2. 如果有滿足3個數字會依據目前的輸出 "<<endl;
	cout<<setfill('c')<<setw(3)<<111<<endl;
	cout<<setfill('c')<<setw(3)<<1111<<endl;
	
	cout<<"\n(判斷式)?  x : y   (滿足判斷式的話 為x 否則為y)"<<endl; 
	cout<<"請輸入一個數字"<<endl; 
	cin>>x;
	
	cout<<"(-1<X<10)?x:88"<<endl;
	cout<<( (x<10 && x>-1)?x:88)<<endl;
	system("pause");
}


