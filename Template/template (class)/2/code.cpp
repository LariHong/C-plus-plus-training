#include <iostream>
#include "temp2.h"
using namespace std;

template<typename T>
temp<T>::temp(int a)
:value(a)
{
}

template<typename T>
temp<T>::~temp()
{
}


template<typename T>
T temp<T>::add(T a1,T a2)
{

	return a1+a2;
}

template<typename T>
void temp<T>::printv()
{
	cout<<"value= "<<value<<endl;
}
