#include <iostream>
#include <string>
using namespace std;

class CandD
{
	public:
		CandD(string a)
		{
			message=a;
			cout<<"constuctor: "<< message<<endl;
		}
		~CandD()
		{
			cout<<"destuctor(�D�n�ΨӲM��constuctor): "<< message<<endl;
		}
	private:
		string message ;
};
