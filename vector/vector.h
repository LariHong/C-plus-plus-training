#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void output(const vector<int> &);
void input(vector<int> &);

void input(vector<int> &array)						//size_t	�@�������ܤj���}�C�B�Ounsigened  
{
	for (size_t i=0; i<array.size(); i++)
	 cin>> array[i];
}

void output(const vector<int> &array)				//const ���γ~ 
{
	size_t i;
	for(i=0; i<array.size(); i++)
	{
		cout<<setw(12)<< array[i];
		
		if((i+1)%5==0)
			cout<<endl;
	}
}
