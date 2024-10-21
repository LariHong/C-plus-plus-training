#include <iostream>
#include <string>
#include "destructor.h"
using namespace std;

CandD A("A GLOBAL");
static CandD B ("B GLOBAL static(不影響)");
CandD C("C GLOBAL");

int main(int argc, char** argv) 
{
	CandD D("D main");
	static CandD E("E main static(因為存於記憶中所以會比較慢被釋放)");
	CandD F("F main");
	system("pause");
}
