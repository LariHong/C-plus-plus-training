#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
	char const *suit[4]={"ant","bee","cat","dog"};
	
	cout<<"suit[0](這裡是輸出char const *suit[4]內第一個元素)          = "<<    suit[0]<<endl;
	cout<<"\n&suit[0](目前ant的存放位置)                                 = "<<   &suit[0]<<endl;
	cout<<"\n*&suit[0](等同於suit[0])                                    = "<<   *&suit[0]<<endl;
	
	cout<<"\n&suit[0][0](目前ant的存放位置 且 從第一個字串開始輸出)      = "<<&suit[0][0]<<endl;
	cout<<"\n&suit[0][1](目前ant的存放位置 且 從第二個字串開始輸出)      = "<<&suit[0][1]<<endl;
	cout<<"\n&suit[0][2](目前ant的存放位置 且 從第三個字串開始輸出)      = "<<&suit[0][2]<<endl;
	
	cout<<"\nsuit[0][0](輸出ant第一個元素)                               = "<<suit[0][0]<<endl;
	cout<<"\nsuit[0][1](輸出ant第二個元素)                               = "<<suit[0][1]<<endl;
	cout<<"\nsuit[0][2](輸出ant第三個元素)                               = "<<suit[0][2]<<endl;
	
	cout<<"\n*suit[0](輸出陣列第一個的第一個元素)                        = "<<*suit[0]<<endl;
	cout<<"\n*suit[1](輸出陣列第二個的第一個元素)                        = "<<*suit[1]<<endl;
	cout<<"\n*suit[2](輸出陣列第三個的第一個元素)                        = "<<*suit[2]<<endl;
	cout<<"\n*suit[3](輸出陣列第四個的第一個元素)                        = "<<*suit[3]<<endl;
	
	cout<<"suit[1]"<<suit[1]<<endl;
	cout<<"suit[2]"<<suit[2]<<endl;
	cout<<"suit[3]"<<suit[3]<<endl;
	
	system("pause");
}
