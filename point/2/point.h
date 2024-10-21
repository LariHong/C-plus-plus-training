#include <iostream>
using namespace std;

int  cube(int);
void cubeR(int*);

int  cube(int na1)
{
	return na1=na1*na1*na1;
}
void cubeR(int*ptr)
{
	*ptr=*ptr**ptr**ptr;
}
