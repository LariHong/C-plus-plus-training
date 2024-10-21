#include <iostream>
#include <string>
using namespace std;

class A
{
	public:
		A(int v=0,string s=" ")
		{
			setvalue(v);
			setstring(s);
		}
		void setvalue(int sv)
		{
			value=sv;
		}
		int getvalue()
		{
			return value;
		}
		void setstring(string sst)
		{
			st=sst;
		}
		string getstring()
		{
			return st;
		}
		void printA()
		{
			cout<<"class A:\n"<<"value= "<<value<<"\nstring= "<<st<<endl<<endl;
		}
	protected:		//基本和衍生class都能存取 
		int value;
	private:
		string st;	//基本class才能存取 
};
