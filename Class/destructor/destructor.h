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
			cout<<"destuctor(主要用來清除constuctor): "<< message<<endl;
		}
	private:
		string message ;
};
