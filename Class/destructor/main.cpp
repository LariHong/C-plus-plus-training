#include <iostream>
#include <string>
#include "destructor.h"
using namespace std;

CandD A("A GLOBAL");
static CandD B ("B GLOBAL static(���v�T)");
CandD C("C GLOBAL");

int main(int argc, char** argv) 
{
	CandD D("D main");
	static CandD E("E main static(�]���s��O�Ф��ҥH�|����C�Q����)");
	CandD F("F main");
	system("pause");
}
