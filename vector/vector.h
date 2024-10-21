#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void output(const vector<int> &);
void input(vector<int> &);

void input(vector<int> &array)						//size_t	一個類似很大的陣列且是unsigened  
{
	for (size_t i=0; i<array.size(); i++)
	 cin>> array[i];
}

void output(const vector<int> &array)				//const 的用途 
{
	size_t i;
	for(i=0; i<array.size(); i++)
	{
		cout<<setw(12)<< array[i];
		
		if((i+1)%5==0)
			cout<<endl;
	}
}
