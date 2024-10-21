#include <iostream>
using namespace std;

class statiC
{
	public:
		statiC(string="空");
		~statiC();
		static int getX();
		
	private:
		static int x;
};
								//static 只能給同一個cpp使用   其他cpp不能呼叫他 
int statiC::x=0;				//static 會新開一個記憶體將變數存於其中  
int statiC::getX()				//static 如果在class內有寫 則必須要在class外面再宣告一次才可使用 
{								//static 只能存取static的變數 
	return x;
}
statiC::statiC(string a)
{
	++x;
	cout<<a<<endl;
}
statiC::~statiC()
{
	cout<<"~statiC()"<<endl;
	--x;
}

int main(int argc, char** argv) 
{
	cout<<"初始的X值= "<<statiC::getX()<<endl;
	
	{
		cout<<"\n初始的狀態"<<endl; 
		
		statiC test;
		cout<<"\n當前的X值= "<<statiC::getX()<<endl;
		
		cout<<"\n將123給值"<<endl; 
		statiC test2("123");
		cout<<"\n當前的X值= "<<statiC::getX()<<endl<<endl<<endl;
	}
	cout<<"\ndestructor釋放後的X值= "<<statiC::getX()<<endl;
	
	
	system("pause");
}
