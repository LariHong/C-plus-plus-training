#include <iostream>
#include "test4.h"
using namespace std;

 	
 ABC::ABC(string name)
 {
 	C(name);
 } 		
 
 void ABC::C(string cname)
 {
 	tname=cname;
 }	
 
 string ABC::D()
 {
 	return tname;
 }
