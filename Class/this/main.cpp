#include <iostream>
using namespace std;

class th
{
	public:
		
		th(int=0);	//初始值方法 
		void print() const		// const置於函式後面且在class中 表示不可以更動private中變數的值 
		{
			cout<<"x= "<<x<<endl;
			cout<<"this->x= "<<this->x<<endl;	//this 表示  目前這個class的位置，只能在class中使用 
			cout<<"(*this).x= "<<(*this).x<<endl;
		}
		
		th &setY(int v)
		{
			y=v;
			return *this;
		}
		void printY()
		{
			cout<<"\n變數名稱.setY(數字).printY()= "<<y<<endl;
		}
		
	private:
		int x;
		int y;	
};

th::th(int a)	//別種  給值的方法 
:x(a)
{
	
}

int main(int argc, char** argv) 
{
	cout<<"知道this的用法:"<<endl;
	
	
	cout<<"\n初始 this的輸出:"<<endl; 
	th test;
	test.print();
	
	cout<<"\n值給100 this的輸出:"<<endl;
	th test2(100);
	test2.print();
	
	cout<<"\n使用回傳this函式 this的輸出:"<<endl;
	th test3;
	test3.setY(60).printY();
	
	
	cout<<"\n//內碼有其他詳解"<<endl;
	system("pause");
}
