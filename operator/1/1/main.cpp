#include <iostream>
using namespace std;

class Operator
{
	friend istream &operator >>(istream&,Operator &);
	friend ostream &operator <<(ostream&,Operator &);
	
	public:
		;
	private:
		int v;
};

istream &operator >>(istream& input,Operator &i)
{
	input>>i.v;
	return input;
}
ostream &operator <<(ostream& output,Operator &o)
{
	output<<o.v<<endl;
	return output;
}

int main(int argc, char** argv) 
{
	Operator test;

	cin>>test>>test;
	cout<<test<<test;
	
	system("pause");
}
