#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) 
{
	char color[]="blue";
	cout<<"(char color[]=blue)琌ヘ玡皚篈"<<endl; 
	cout<<  "color[0]  "<<color[0]<<endl;
	cout<<"\ncolor[1]  "<<color[1]<<endl;
	cout<<"\ncolor[2]  "<<color[2]<<endl;
	cout<<"\ncolor[3]  "<<color[3]<<endl;
	cout<<"\ncolor[4]  "<<color[4]<<endl;
	
	const char * colorptr="blue";
	cout<<"\n(const char * colorptr=blue)穦眖皚ヘ玡竚膥尿块"<<endl; 
	cout<<  "\ncolorptr  "<<colorptr  <<endl;
	cout<<"\ncolorptr+1  "<<colorptr+1<<endl;
	cout<<"\ncolorptr+2  "<<colorptr+2<<endl;
	cout<<"\ncolorptr+3  "<<colorptr+3<<endl;
	cout<<"\ncolorptr+4  "<<colorptr+4<<endl;
	
	
	cout<<"\n(const char * colorptr=blue)琌ヘ玡ptr篈"<<endl; 
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
	
	cout<<"char str1[] = \"abc\"   char str2[] = \"abc\"  琌单?"<<endl; 
	cout << boolalpha << ( str1==str2 ) << endl; 
	cout<<"瘤礛块常琌abc 琌纗竚 ぃ﹚单"<<endl; 
	
	cout<<"\nconst char str3[] = \"abc\"   const char str4[] = \"abc\"  琌单?"<<endl; 
	cout << boolalpha << ( str3==str4 ) << endl;
	cout<<" const ぃэ"<<endl; 
	
	cout<<"\nconst char *str5 = \"abc\"   const char *str6 = \"abc\"  琌单?"<<endl;
	cout << boolalpha << ( str5==str6 ) << endl;
	cout<<"⊿Τ纗竚 盢abc竚竚 璶ノウ"<<endl; 
	
	
	system("pause");
}
