#include <iostream>
using namespace std;

template<typename T>
class temp
{
	public:
		temp(int=0);
		~temp();
		T add(T a1,T a2);
		void printv();
	private:
		int value;	
};


