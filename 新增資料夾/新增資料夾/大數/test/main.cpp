#include <iostream>
#include <cstring>
using namespace std;
#define numofcin 200000

void reverse(char *a,int *s)
{
	int tail=0;
	for(int i=strlen(a)-1; i>=0; i--)
	{
		if(a[i]!='\0')
		{
			s[tail]=a[i]-48;
		
			tail++;
		}	
	}
}
void add(int *s, int *b)
{
         int carry = 0;
 
        for(int i = 0; i < numofcin; i++)
		{
			if(b>=0)
			{
				s[i] = s[i]+b[i]+carry ;
            	carry = s[i] / 10;
            	s[i] %= 10;
			}         	
        }
}
void sub(int *s, int *b)
{
	int borrow = 0;
	for(int i = 0; i < numofcin; i++)
	{
			s[i] = s[i] -b[i] - borrow;
            
            if(s[i] < 0)
			{
                borrow = 1;
                s[i] += 10;
            }
            else
                borrow = 0;
    }
}
void print(int *s)
{
	int temp;
	for(int i=numofcin-1; i>=0 ; i--)
	{
		if(s[i]!=0)
		{
			temp=i;
			break;
		}
	}
	
	for(int i=temp; i>=0 ; i--)
	{
		cout<<s[i];
	}
}

int main(int argc, char** argv) 
{
	
	char a[numofcin]="";
	int  s[numofcin]={};
	int  b[numofcin]={};
	
	b[0]=1;
	
	cin>>a;
	reverse(a,s);
	sub(s,b);

	print(s);

	return 0;
}
