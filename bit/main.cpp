#include <iostream>
#include <iomanip>
using namespace std;
void displaybits(unsigned v)
{
	const int SHIFT = 8*sizeof(unsigned)-1; //��8*sizeof(unsigned)-1 �Ʀr 
	const unsigned MASK = 1<<SHIFT; //1 ������ 8*sizeof(unsigned)-1
	cout<<setw(10)<<v<<" = ";
	
	for(unsigned i=1; i<=SHIFT+1; i++)
	{
		cout<<(v & MASK ? '1' : '0'); //�u��̥��䪺bit 
		v<<=1;						  //����1 
		if(i%8==0)
		{
			cout<<" ";
		}
	}
	cout<<endl;
}

int main(int argc, char** argv) 
{
	unsigned input;
	
	cout<<"��Junsigned�Ʀr: ";
	cin>>input;
	displaybits(input);
	
	unsigned number1; 
	unsigned number2; 
	unsigned mask; 
	unsigned setbits; 
	
	number1= 2179876355;
	mask=1;
	cout<<"\nThe result of combining the following\n";
	displaybits(number1);
	displaybits(mask);
	cout<<"using the bitwise AND operator & is\n";
	displaybits(mask&number1);
	number1=15;
	setbits=241;
	cout<<"\nThe result of combining the following\n";
	displaybits(number1);
	displaybits(setbits);
	cout<<"using the bitwise OR operator | is\n";
	displaybits(setbits|number1);
	number1= 139;
	number2= 199;
	cout<<"\nThe result of combining the following\n";
	displaybits(number1);
	displaybits(number2);
	cout<<"using the bitwise OR operator ^ is\n";
	displaybits(mask^number1);
	number1=21845;
	cout<<"\nThe one's complement of\n";
	displaybits(number1);
	cout<<"is"<<endl;
	displaybits(~number1);
	
	number1=960;
	cout<<"\nnumber1= "<<number1<<endl;
	displaybits(number1);
	cout<<"\n������8��"<<endl;
	displaybits(number1<<8);
	cout<<"\n��_�쥻\nnumber1="<<number1<<endl;
	displaybits(number1);
	cout<<"\n���k��8��"<<number1<<endl;
	displaybits(number1>>8);
	return 0;
}
