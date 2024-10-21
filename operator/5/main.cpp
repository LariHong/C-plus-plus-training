#include <iostream>
using namespace std;

class prepost1
{
	friend ostream &operator<<(ostream& output,const prepost1& a1)
	{
		output<<a1.value1<<endl;
	}
	public:
		prepost1(int v=0)
		:value1(v)
		{
		}
		prepost1 &operator++()
		{
			value1=value1+1;
			return (*this);
		}
		prepost1 operator++(int)
		{
			prepost1 temp=(*this);
			value1=value1+1;
			return temp;
		}
	private:
		int value1;
};
class prepost2
{
	friend ostream &operator<<(ostream& output,const prepost2& a2)
	{
		output<<a2.value2<<endl;
	}
	friend prepost2 &operator++(prepost2& pp1)
	{
		
		pp1.value2=pp1.value2+1;
		return pp1;
	}
	friend prepost2 operator++(prepost2& pp2,int)
	{

		prepost2 temp =pp2;
		pp2.value2=pp2.value2+1;
		return temp;

	}
	public:
		prepost2(int v=0)
		:value2(v)
		{
		}
	private:
		int value2;
};
int main(int argc, char** argv) 
{
	cout<<"++v v++的實作"<<endl;
	cout<<"\n(在public內)寫"<<endl;
	prepost1 test1;
	cout<<"\ntest1= "<<test1;
	cout<<"++test1= "<<++test1;
	cout<<"test1= "<<test1<<endl;
	
	prepost1 test2;
	cout<<"\ntest2= "<<test2;
	cout<<"test2++= "<<test2++;
	cout<<"test2= "<<test2<<endl;
	
	
	prepost2 test3;
	cout<<"\n(寫在public外)"<<endl;
	cout<<"\ntest3= "<<test3;
	cout<<"++test3= "<<++test3;
	cout<<"test3= "<<test3<<endl;
	
	prepost2 test4;
	cout<<"\ntest4= "<<test4;
	cout<<"test4++= "<<test4++;
	cout<<"test4= "<<test4<<endl;
	
	system("pause");
}
