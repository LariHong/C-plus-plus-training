#include <iostream>
using namespace std;

class arrayOperator
{
	friend istream &operator>>(istream&,arrayOperator&);
	friend ostream &operator<<(ostream&,const arrayOperator&);
	
	public:
		arrayOperator(int =5);
		arrayOperator(const arrayOperator&);
		~arrayOperator();
		const arrayOperator &operator =(const arrayOperator&);
		bool operator ==(const arrayOperator&)const;
		bool operator !=(const arrayOperator&)const;
		int &operator[](int);
		int operator[](int)const;
	private:
		int size;
		int *ptr;
};

