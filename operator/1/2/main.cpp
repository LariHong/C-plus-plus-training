#include <iostream>
using namespace std;

class Operator
{
	
	public:
		istream &operator >>(istream& input)
		{
			input >> v;
			return input;
		}
		ostream &operator <<(ostream& output)
		{
			output<<v<<endl;
			return output;
		}	
	private:
		int v;
};

int main(int argc, char** argv) 
{
	Operator test;

	test>>cin;
	test<<cout;
	
	system("pause");
}
