#include <iostream>
using namespace std;

class Operator
{
	
	friend istream &operator >>(istream&,Operator&);
	public:
		friend ostream &operator <<(ostream& output,Operator& i);
		
		ostream &operator <<(ostream& output)
		{
			output<<v<<endl;
			return output;
		}
	private:
		int v;
};

istream &operator >>(istream& input,Operator& i)
{
	input >> i.v;
	return input;
}
ostream &operator <<(ostream& output,Operator& i)
{
	output<<i.v<<endl;
	return output;
}


int main(int argc, char** argv) 
{
	Operator test;

	cin>>test;
	cout<<"test<<cout= ";
	test<<cout;
	cout<<"cout<<test= ";
	cout<<test;
	system("pause");
}
