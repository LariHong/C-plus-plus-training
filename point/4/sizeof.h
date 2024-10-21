#include <iostream>


size_t cala(int* ); 
size_t calb(double* ); 

size_t cala(int *ptra)
{
	return sizeof(ptra);
}

size_t calb(double *ptrb)
{
	return sizeof(ptrb);
}
