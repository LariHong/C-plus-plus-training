#include <string>
using namespace std;

template <class T>
T ABC (T na)
{
	cout<<"na  "<<na<<endl;
	T gn(T na);							// �p�Ggn �����A���ŦX ABC�� template���� �i�H�ۤv��� 
}

template <class T>						//template �����n �ӧO���n��template���ŧi 
T gn(T name1)
{
	cout<<"name1 "<<name1<<endl;
	return name1;
}

