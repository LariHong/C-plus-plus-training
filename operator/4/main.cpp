#include <iostream>
using namespace std;

class charr
{
	public:
		charr(char ch)
		:Charc(ch)
		{
		
		}
	
		operator char()
		{
			cout<<"charr operator char()"<<endl;
			return Charc;
		}
	private:

		char Charc;		
};
class charcs
{
	public:
		charcs(char* chs)
		:Charcs2(chs)
		{
		
		}
	
		operator char*()
		{
			cout<<"chars operator char*()"<<endl;
			return Charcs2;
		}
	private:

		char* Charcs2;		
};
class intt
{
	public:
		intt(int v)
		:valuei(v)
		{
		
		}
		operator int()
		{
			cout<<"intt operator int()"<<endl;
			return valuei;
		}

		operator charr()
		{
			cout<<"intt operator charr()"<<endl;;
		}
		operator charcs()
		{
			cout<<"intt operator charcs()"<<endl;
		}
	private:
		int valuei;		
};
int main(int argc, char** argv) 
{
	cout<<"�H�U�Oclass�����A�ഫ"<<endl;
	cout<<"\nclass intt �নint"<<endl;
	intt test1(10);
	int tt1=test1;

	cout<<"tt1= "<<tt1<<endl;
	
	cout<<"\nclass charr �নchar"<<endl;
	charr test2('a');
	char tt2=test2;
	
	cout<<"tt2= "<<tt2<<endl;
	
	cout<<"\nclass charcs �নchar*"<<endl;
	char* cs="b";
	charcs test3(cs);
	char* tt3=test3;
	
	cout<<"tt3= "<<tt3<<endl;
	
	cout<<"\nclass intt �নclass charr"<<endl;
	intt test4(5);
	charr test5('c');
	test5=test4;
		
	cout<<"\nclass intt �নclass charcs"<<endl;
	intt test6(6);
	char* cs2="d";
	charcs test7(cs2);
	test7=test6;
		
	system("pause");
}
