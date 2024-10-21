#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	char sent[4];
	cout<<"輸入4位數 可以輸入少於4位數 或 多於4位數 來判斷狀態"<<endl;
	cin.getline(sent,4,'\n');
	
	cout<<   "sent=  "<<sent<<endl;
	cout<<"sent[0]=  "<<sent[0]<<endl;
	cout<<"sent[1]=  "<<sent[1]<<endl;
	cout<<"sent[2]=  "<<sent[2]<<endl;
	cout<<"sent[3]=  "<<sent[3]<<endl;
	
	system("pause");
}
