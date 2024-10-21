#include <iostream>
#include <cstring>
#include <cstdlib> //atoi atof atol strtod srrtol  strtoul 
using namespace std;


int main(int argc, char** argv) 
{
	cout<<"�@��cstring���O"<<endl;
	
	char x[]="123 456 789";
	char y[25]="";
	char z[15]="";
	
	cout<<"\n��l y= "<<y<<endl;
	strcpy(y,x);
	cout<<"After strcpy(y,x)= "<<y<<endl;//�ƻs 
	
	cout<<"��l z= "<<z<<endl;
	strncpy(z,x,14);
	z[14]='\0';
	cout<<"After strcpy(z,x,14)= "<<z<<endl;
	
	cout<<"----------------------------------------";
	
	char s1[20]="123456";
	char s2[]=" 789 10";
	char s3[30]="";
	
	cout<<"\n��l s1= "<<s1<<endl;
	cout<<"��l s2= "<<s2<<endl;
	
	strcat(s1,s2);
	cout<<"After strcat(s1,s2)"<<endl; //�s�� 
	cout<<"s1= "<<s1<<endl;
	cout<<"s2= "<<s2<<endl;
	
	cout<<"\n��l s3"<<s3<<endl;
	strncat(s3,s1,8);
	cout<<"After strcat(s3,s1,6)= "<<endl;
	cout<<"s1= "<<s1<<endl;
	cout<<"s3= "<<s3<<endl;
	
	cout<<"----------------------------------------";
	
	char *s4="123456";
	char *s5="789101";
	char *s6="123 14";
	
	cout<<"\n��l s4= "<<s4<<endl;
	cout<<"��l s5= "<<s5<<endl;
	cout<<"��l s6= "<<s6<<endl;
	
	cout<<"strcmp(s4,s5)="<<strcmp(s4,s5)<<endl; //��� 
	cout<<"strcmp(s4,s6)="<<strcmp(s4,s6)<<endl;
	cout<<"strcmp(s5,s6)="<<strcmp(s5,s6)<<endl;
	
	cout<<"strncmp(s4,s5,3)="<<strncmp(s4,s5,3)<<endl;
	cout<<"strncmp(s4,s6,3)="<<strncmp(s4,s6,3)<<endl;
	cout<<"strncmp(s5,s6,3)="<<strncmp(s5,s6,3)<<endl;
	
	cout<<"----------------------------------------";
	
	char sentence[]="12 345 6 7 89 10 111213";
	char *take;
	cout<<"\n��l sentence= "<<sentence<<endl;
	cout<<"strlen(sentence)= "<<strlen(sentence)<<endl; 
	
	take=strtok(sentence," ");//sentence �J��Ĥ@�� space �|��'\0'  
	
	while(take!=NULL)
	{
		cout<<"take= "<<take<<"\n";
		take=strtok(NULL," ");
	}
	cout<<"After sentence= "<<sentence<<endl;
	
	cout<<"----------------------------------------";
	
	double d = atof("99.2");//�r����Ʀr 
	cout<<"\nd= "<<d<<endl;
	
	int i = atof("98");
	cout<<"i= "<<i<<endl;
	
	int l = atol("96");
	cout<<"l= "<<l<<endl;
	
	double d1;
	char d1str[]="12.3 tttt";
	char *d1ptr;
	
	cout<<"\n��l d1str= "<<d1str<<endl;
	d1=strtod(d1str,&d1ptr); 
	
	cout<<"strtod= "<<d1<<"\n�Ѿl�r��= "<< d1ptr<<endl;
	
	long d2;
	char d2str[]="-1234567 tttt";
	char *d2ptr;
	
	cout<<"\n��l d2str= "<<d2str<<endl;
	d2=strtol(d2str,&d2ptr,0);  //�ĤT�޼ƬO �r��ثe��base
	
	cout<<"strtol= "<<d2<<"\n�Ѿl�r��= "<< d2ptr<<endl;//d2 �O�Q�i�� 
	
	unsigned long d3;
	char d3str[]="16tttt";
	char *d3ptr;
	
	cout<<"\n��l d3str= "<<d3str<<endl;
	d3=strtoul(d3str,&d3ptr,0); 
	
	cout<<"strtoul= "<<d3<<"\n�Ѿl�r��= "<< d3ptr<<endl;
	
	cout<<"----------------------------------------";
	
	char sentence1[]="1234567";
	char c1='1';
	char c2='a';
	cout<<endl;
	if(strchr(sentence1,c1)!=NULL)//��r�� 
	{
		cout<<c1<<" was found in "<<sentence1<<endl;
	}
	else
	{
		cout<<c1<<" was not found in "<<sentence1<<endl;
	}
	
	if(strchr(sentence1,c2)!=NULL)
	{
		cout<<c2<<" was found in "<<sentence1<<endl;
	}
	else
	{
		cout<<c2<<" was not found in "<<sentence1<<endl;
	}
	
	cout<<"----------------------------------------";
	
	char sentence2[]="1234567";
	char sentence3[]="a9bc0d7";
	char sentence4[]="7654321";
	char sentence5[]="5";
	char sentence6[]="123 456 789 123";
	char c3='7';
	
	cout<<"\nsentence2= "<<sentence2<<endl;
	cout<<"sentence3= "<<sentence3<<endl;
	cout<<"\n�qsentence2�� ��sentence3���@�r��m= "<<strcspn(sentence2,sentence3)<<endl;
	cout<<"�qsentence2�� ��sentence3���r= "<<*strpbrk(sentence2,sentence3)<<endl; 
	cout<<"�qsentence2�� �䦳sentence4���s��r���= "<<strspn(sentence2,sentence4)<<endl;
	
	cout<<"strstr(sentence2,sentence5)= "<<strstr(sentence2,sentence5)<<endl;
	cout<<"strrchr(sentence,sentence7)= "<<strrchr(sentence6,c3)<<endl;
	
	cout<<"----------------------------------------";
	
	
	return 0;
}
