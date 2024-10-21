#include <string>
using namespace std;

template <class T>
T ABC (T na)
{
	cout<<"na  "<<na<<endl;
	T gn(T na);							// 如果gn 的型態不符合 ABC的 template的話 可以自己更改 
}

template <class T>						//template 必須要 個別都要有template的宣告 
T gn(T name1)
{
	cout<<"name1 "<<name1<<endl;
	return name1;
}

