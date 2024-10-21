#include <iostream>
#include "code.cpp"    //本來分三個是不行的 用這個方法會大量增加編譯時間 
using namespace std;


int main()
{
	temp<double> A(18);
	A.printv();
	cout<<"a1+a2= "<<A.add(10,60)<<endl;
	system("pause");
}
