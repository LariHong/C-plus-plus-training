#include <iostream>
#include <iomanip>
#include "arrayOperator.h"
using namespace std;

istream &operator>>(istream& input,arrayOperator& array)
{
	for(int i=0; i<array.size; i++)
	{
		input >> array.ptr[i];
	}
	return input;
}
ostream &operator<<(ostream&output,const arrayOperator&array)
{
	for(int i=0; i<array.size; i++)
	{
		output <<"array.ptr["<<i<<"]= "<< array.ptr[i]<<"  ";
		if((i+1)%4==0)
		{
			cout<<endl;
		}
	}
	cout<<endl<<endl;
	return output;
}
	
arrayOperator::arrayOperator(int arraysize)
{
	size=(arraysize>0 ?arraysize:5);
	ptr=new int[size];
	for(int i=0; i<size; i++)
	{
		ptr[i]=0;
	}
}
arrayOperator::arrayOperator(const arrayOperator& array)
:size(array.size)
{
	(*this).ptr= new int[(*this).size];
	for(int i=0; i<(*this).size; i++)
	{
		(*this).ptr[i]=array.ptr[i];
	}
}
arrayOperator::~arrayOperator()
{
	delete[] ptr;
}
const arrayOperator &arrayOperator::operator =(const arrayOperator& arrayright)
{
	
	if((*this)!=arrayright)
	{
		delete[] ptr;
		(*this).size=arrayright.size;
		ptr= new int[(*this).size];
		for(int i=0; i<(*this).size; i++)
		{
			ptr[i]=arrayright.ptr[i];
		}
	}
	
	/*
	if(this!=&arrayright)
	{
		if(size!=arrayright.size)
		{
			delete[] ptr;
			size=arrayright.size;
			ptr= new int[size];
			for(int i=0; i<(*this).size; i++)
			{
				ptr[i]=arrayright.ptr[i];
			}
		}
	}
	*/
	return *this;
}
bool arrayOperator::operator ==(const arrayOperator& rightarray)const
{
	if((*this).size!=rightarray.size)
	{
		return false;
	}
	for(int i=0; i<rightarray.size; i++)
	{
		if((*this).ptr[i]!=rightarray.ptr[i])
		{
			return false;
		}
	}
	
	return true;
}
bool arrayOperator::operator !=(const arrayOperator&rightarray)const
{
	return !((*this)==rightarray);
}

int &arrayOperator::operator[](int a)
{
	if(a<0||(*this).size<=a)
	{
		cout<<"¶W¥X½d³ò"<<endl; 
		exit(0);
	}
	
	return (*this).ptr[a];
}
int arrayOperator::operator[](int a)const
{
	if(a<0||(*this).size<=a)
	{
		cout<<"¶W¥X½d³ò"<<endl; 
		exit(0);
	}
	
	return (*this).ptr[a];
}

