#include<iostream>
using namespace std;

template<typename T>
class S
{
	public:
		S(int=10);
		bool push(const T&);
		bool pop(T&);
	private:
		int size;
		T *sptr;	
};

template<typename T>
S<T>::S(int s)
	:size(s),sptr(new T[size] )
	{
	}
	
	
template<typename T>	
bool S<T>::push(const T& V)
{
	cout<<"push"<<endl;
}

template<typename T>
bool S<T>::pop(T&V)
{
	cout<<"POP"<<endl;
}
