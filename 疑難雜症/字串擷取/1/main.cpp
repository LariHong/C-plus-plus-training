#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) 
{
	char color[]="blue";
	cout<<"(char color[]=blue)�H�U�O�ثe�}�C�s�������A"<<endl; 
	cout<<  "color[0]  "<<color[0]<<endl;
	cout<<"\ncolor[1]  "<<color[1]<<endl;
	cout<<"\ncolor[2]  "<<color[2]<<endl;
	cout<<"\ncolor[3]  "<<color[3]<<endl;
	cout<<"\ncolor[4]  "<<color[4]<<endl;
	
	const char * colorptr="blue";
	cout<<"\n(const char * colorptr=blue)�H�U�|�q�}�C���ثe��m�~���X"<<endl; 
	cout<<  "\ncolorptr  "<<colorptr  <<endl;
	cout<<"\ncolorptr+1  "<<colorptr+1<<endl;
	cout<<"\ncolorptr+2  "<<colorptr+2<<endl;
	cout<<"\ncolorptr+3  "<<colorptr+3<<endl;
	cout<<"\ncolorptr+4  "<<colorptr+4<<endl;
	
	
	cout<<"\n(const char * colorptr=blue)�H�U�O�ثeptr�s�������A"<<endl; 
	cout<<"\ncolorptr[0]  "<<colorptr[0]<<endl;
	cout<<"\ncolorptr[1]  "<<colorptr[1]<<endl;
	cout<<"\ncolorptr[2]  "<<colorptr[2]<<endl;
	cout<<"\ncolorptr[3]  "<<colorptr[3]<<endl;
	cout<<"\ncolorptr[4]  "<<colorptr[4]<<endl;
	
	
	char str1[] = "abc";
	char str2[] = "abc";
	const char str3[] = "abc"; 
	const char str4[] = "abc"; 
	const char* str5 = "abc";
	const char* str6 = "abc";
	
	cout<<"char str1[] = \"abc\"   char str2[] = \"abc\"  �O�_�۵�?"<<endl; 
	cout << boolalpha << ( str1==str2 ) << endl; 
	cout<<"���M�L�̿�X���Oabc ���O�L���x�s����m���U�۪��� ���@�w�۵�"<<endl; 
	
	cout<<"\nconst char str3[] = \"abc\"   const char str4[] = \"abc\"  �O�_�۵�?"<<endl; 
	cout << boolalpha << ( str3==str4 ) << endl;
	cout<<"�P�W �åBconst ������"<<endl; 
	
	cout<<"\nconst char *str5 = \"abc\"   const char *str6 = \"abc\"  �O�_�۵�?"<<endl;
	cout << boolalpha << ( str5==str6 ) << endl;
	cout<<"�S���U�۪��x�s��m �Nabc��m�@�Ӧ�m �n�ΦA�h���V��"<<endl; 
	
	
	system("pause");
}
