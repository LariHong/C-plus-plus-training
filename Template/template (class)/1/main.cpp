#include<iostream>
#include"test.h"
using namespace std;

int main(int argc, char** argv) 
{
	S<double> A(10);
	double c=1;
	A.pop(c);
	A.push(c);
	return 0;
}
