#include <iostream>
#include <string>
#include <sstream>
using namespace std;
			string s1("go");
			string s2(" power");
			string s3(" ranger!!!");
			string s4;
			string s5;
			
class Old
{
	public:
		
		void print()
		{
			cout<<"�@��string �禡�w"<<endl;
			
	
			cout<<"\ns1= "<<s1<<endl;
			cout<<"s2= "<<s2<<endl;
			cout<<"s3= "<<s3<<endl;
			cout<<"s4= "<<s4<<endl;
			cout<<"----------------------------------------------------------------";
			cout<<"\ns1�Ms2���(ASCII�ƭȤ�Ĥ@�줸/�r������)"<<endl;
			cout<<"s1 >s2?: "<<(s1 >s2 ?"true":"false")<<endl;
			cout<<"s1 <s2?: "<<(s1 <s2 ?"true":"false")<<endl; 
			cout<<"s1>=s2?: "<<(s1>=s2 ?"true":"false")<<endl; 
			cout<<"s1<=s2?: "<<(s1<=s2 ?"true":"false")<<endl; 
			cout<<"s1==s2?: "<<(s1==s2 ?"true":"false")<<endl; 
			cout<<"s1!=s2?: "<<(s1!=s2 ?"true":"false")<<endl;
	
			cout<<"\n�p�G s4���Ŧr�� "<<endl;
			if(s4.empty()) 
			{
				cout<<"��"<<endl;
				cout<<"s4=s1"<<endl;
				s4=s1;
				cout<<"s4= "<<s4<<endl;
				s5.assign(s1);
				cout<<"s5.assign(s1);\n"<<"s5= "<<s5<<endl;
			} 
			cout<<"----------------------------------------------------------------";
			s1+=s4;
			cout<<"\ns1+=s4 \n"<<s1<<endl;
			cout<<"----------------------------------------------------------------";
			s1+="!!";
			cout<<"\ns1+=\"!!\"  "<<s1<<endl;
			cout<<"----------------------------------------------------------------";
			cout<<"\ns1.substr(3,5)  \n"<<s1.substr(3,5)<<endl;
			cout<<"----------------------------------------------------------------";
			cout<<"\ns1.substr(4)  \n"  <<s1.substr(4)<<endl;
			cout<<"----------------------------------------------------------------";
	
			s1+=s2;
			s1+=s3;
			string s6(s1);
	
			cout<<"\nstring s6(s1) "<<endl;
			cout<<"s1= "<<s1<<endl;
			cout<<"s5= "<<s6<<endl;
			cout<<"----------------------------------------------------------------";
			s1[0]='G';
			s1[2]='G';
			s1[7]='P';
			s1[13]='R';
	
			cout<<"\ns1[0]='G',s1[2]='G',s1[7]='P',s1[13]='R'\n"<<s1<<endl;
			cout<<"----------------------------------------------------------------";
		}
};

class New
{
	public:
		void Comparefirstchar(string& s1,int f1,string& s2,int f2,int result)
		{
			if(s1.substr(f1,1)>s2.substr(f2,1))
			{
				cout<<"����Ĥ@�Ӧr���j"<<"\ns1.substr(f1,1)= "<<s1.substr(f1,1)
										<<"\ns2.substr(f2,1)= "<<s2.substr(f2,1)<<endl;
				IfandElseif(result);
			}
			else if(s1.substr(f1,1)<s2.substr(f2,1))
			{
				cout<<"�k��Ĥ@�Ӧr���j"<<"\ns1.substr(f1,1)= "<<s1.substr(f1,1)
										<<"\ns2.substr(f2,1)= "<<s2.substr(f2,1)<<endl;
				IfandElseif(result);
			}
			else 
			{
				cout<<"���� �k��Ĥ@�Ӧr���@�ˤj"<<"\ns1.substr(f1,1)= "<<s1.substr(f1,1)
												 <<"\ns2.substr(f2,1)= "<<s2.substr(f2,1)<<endl;
				IfandElseif(result);
			}
		}
		void IfandElseif(int res)
		{
			
			if(res>0)
			{
				cout<<"����j"<<"   result= "<<res<<endl; 
			}
			else if(res<0)
			{
				cout<<"�k��j"<<"   result= "<<res<<endl;
			}
			else 
			{
				cout<<"���� �k��@�˪�"<<"   result= "<<res<<endl;
			}
		}

		void print()
		{
			cout<<"\n�@��string��l"<<endl; 
			string right1;	//string error1='c';
			right1='c';
			cout<<"\nstring right1;  right1='c';"<<endl;
			//string error2;	
			//error2('c');
			cout<<"right1= "<<right1<<endl;
			
			string right2("456");	//string error3('c');
			//string error4;
			//error4("123");
			cout<<"\nstring right2(\"456\");"<<endl;
			cout<<"right2= "<<right2<<endl;
			
			string right3="123";//right2 right3 �O�I�sstring���غc�l 
			//string error5=22;
			//string error6(22);
			cout<<"\nstring right3=\"123\";"<<endl;
			cout<<"right3= "<<right3<<endl;
			
			string fill(10,'x');
			cout<<"\nstring fill(10,'x');"<<endl;
			cout<<"fill= "<<fill<<endl;
			cout<<"----------------------------------------------------------------";
			cout<<"\ns2.at(i);"<<endl;
			for(int i=0; i<s2.length(); i++)
			{
				if(s2.at(i)==' ')
				{
					cout<<"i= "<<i<<"   "<<"��"<<endl;
				}
				else
				{
					cout<<"i= "<<i<<"   "<<s2.at(i)<<endl;
				}
			}
			cout<<"----------------------------------------------------------------";
			cout<<"\nstring.append()"<<endl;
			string s6("New");
			s6+="!";
			s6.append(s2);
			cout<<"\ns6.append(s2); //s6+s2"<<endl;
			cout<<s6<<endl;
			
			s6.append(s1,6,14);
			cout<<"\ns6.append(s1,6,14); //append(���[�r��,�}�l��m,����)"<<endl;
			cout<<s6<<endl;
			cout<<"----------------------------------------------------------------";
			cout<<"\nstring.compare()"<<endl;
			
			int result;
			cout<<"\nresult=s1.compare(s2);"<<endl;
			result=s1.compare(s2);
			
			
			cout<<"\nresult=s1.compare(10,4,s2,1,1); //s1= "<<s1.substr(10,4)<<" s2= "<<s2.substr(1,1)<<endl;
			cout<<"//string.compare(����_�l��m,����,���string,�_�l��m,����);\n"<<endl;
			result=s1.compare(10,4,s2,1,1);
			Comparefirstchar(s1,10,s2,1,result);
		
			
			cout<<"\nresult=s1.compare(8,3,s2,2,1); //s1= "<<s1.substr(8,3)<<" s2= "<<s2.substr(2,1)<<endl;
			result=s1.compare(8,3,s2,2,1);
			Comparefirstchar(s1,8,s2,2,result);
			
			cout<<"\nresult=s1.compare(8,1,s2,2,1); //s1= "<<s1.substr(8,1)<<" s2= "<<s2.substr(2,1)<<endl;
			result=s1.compare(8,1,s2,2,1);
			Comparefirstchar(s1,8,s2,2,result);
			cout<<"----------------------------------------------------------------";
			cout<<"\nstring.swap()"<<endl;
			string sw1="abc";
			string sw2="123";
			cout<<"\nsw1= "<<sw1<<endl;
			cout<<"sw2= "<<sw2<<endl;
			sw1.swap(sw2);
			cout<<"\nsw1.swap(sw2);"<<endl;
			cout<<"\nsw1= "<<sw1<<endl;
			cout<<"sw2= "<<sw2<<endl;
			cout<<"----------------------------------------------------------------";
			cout<<"\nstring�S��"<<endl;
			string s7("how sort works1");
			cout<<"s7.empty()= "<<boolalpha<<s7.empty()<<endl;
			cout<<"s7.max_size()= "<<s7.max_size()<<endl;
			cout<<"s7= "<<s7<<endl;
			cout<<"s7.size()= "<<s7.size()<<endl;
			cout<<"s7.capacity()= "<<s7.capacity()<<endl;
			s7.resize(s7.length()+16);//�C��@�}�l������15�|����+15 ����h+n ����75�|���@�� 
			cout<<"s7= "<<s7<<endl;
			cout<<"s7.resize(s7.length()+16)= "<<s7.size()<<endl;
			cout<<"s7.capacity()= "<<s7.capacity()<<endl;
			cout<<"----------------------------------------------------------------";
			cout<<"\nstring.find"<<endl;
			cout<<"s7= "<<s7<<endl;
			cout<<"\n�q����"<<endl;
			cout<<"s7.find(\"or\")= "<<s7.find("or")<<endl;
			cout<<"\n�q�k��"<<endl;
			cout<<"s7.rfind(\"or\")= "<<s7.rfind("or")<<endl;
			cout<<"\n�q����Ĥ@��\" \"�������@�r��"<<endl;
			cout<<"s7.find_first_of(\"gwyar\")= "<<s7.find_first_of("gwyar")
			<<"   found= "<<s7[s7.find_first_of("gwyar")]<<endl;
			cout<<"\n�q����̫�@��\" \"�������@�r��"<<endl;
			cout<<"s7.find_last_of(\"gwyar\")= "<<s7.find_last_of("gwyar")
			<<"   found= "<<s7[s7.find_last_of("gwyar")]<<endl;
			cout<<"\n�q����Ĥ@��\" \"�����S�����r��"<<endl;
			cout<<"s7.find_first_not_of(\"gwyar\")= "<<s7.find_first_not_of("gwyar")
			<<"   found= "<<s7[s7.find_first_not_of("gwyar")]<<endl;
			cout<<"\n�q����̫�@��\" \"�����S�����r��"<<endl;
			cout<<"s7.find_last_not_of(\"how sort works1\")= "<<s7.find_last_not_of("how sort works1")
			<<"   found= "<<s7[s7.find_last_not_of("how sort works1")]<<endl;
			cout<<"----------------------------------------------------------------";
			cout<<"\nstring�m��"<<endl;
			string s8("abcdefghijklmnopqrstuvwxyz");
			cout<<"s8= "<<s8<<endl;
			cout<<"\nstring.erase(n)�M�Xn���᪺�r"<<endl;
			cout<<"s8.erase(10)= "<<s8.erase(10)<<endl;
			string s9;
			s9=s1;
			int replace=s9.find(" ");
			
			while(replace!=string::npos)
			{
				//string.replace(�_�l��m,���N�Ӽ�,"�r��")
				s9.replace(replace,1,"XX");
				replace=s9.find(" ",replace+1);
			}
			cout<<"\n���N��:\ns9= "<<s9<<endl;
			
			replace=s9.find("X");
			while(replace!=string::npos)
			{
				//string.replace(�_�l��m,���N�Ӽ�,"�r��",�r��_�l��m,�Ӽ�)
				s9.replace(replace,2,"abcdefg",1,3);
				replace=s9.find("X",replace+1);
			}
			cout<<"\n���N2�ӫ�:\ns9= "<<s9<<endl;
			cout<<"----------------------------------------------------------------";
			cout<<"\n���Jstring"<<endl;
			string insert1("The ranger");
			string insert2("gogo");
			cout<<"inset1= "<<insert1<<endl;
			cout<<"inset2= "<<insert2<<endl;
			insert1.insert(3,insert2);
			cout<<"\ninsert1.insert(3,insert2); "
				<<"//string.insert(�_�l��m,���J���r��)"<<endl;
			cout<<"inset1= "<<insert1<<endl;
			cout<<"inset2= "<<insert2<<endl;
			insert2.insert(4,insert1,0,3);
			cout<<"\ninsert2.insert(4,insert1,0,3);\n"
				<<"//string.insert(�_�l��m,���J���r��,�r��_�l��m,����)"<<endl;
			cout<<"inset1= "<<insert1<<endl;
			cout<<"inset2= "<<insert2<<endl;
			cout<<"----------------------------------------------------------------";
			cout<<"\n�����ഫ"<<endl;
			string change1("Change");
			cout<<"\n�@��string"<<endl; 
			cout<<"change1= "<<change1<<endl;
			for(int i=0; i<change1.length(); i++)
			{
				cout<<"change1["<<i<<"]= "<<change1[i]<<endl;
			}
			cout<<"\nc�榡 ������null"<<endl;
			cout<<"change1.c_str()= "<<change1.c_str()<<endl;
			
			cout<<"\nconst char*"<<endl;
			const char* ptr1=0;
			ptr1=change1.data(); //ptr1 ����change1.date() �B��������null 
			cout<<"ptr1= "<<ptr1<<endl;
			for(int i=0; i<change1.length(); i++)
			{
				cout<<"*(ptr1+"<<i<<")= "<<*(ptr1+i)<<endl;
			}
			cout<<"\nnew char*"<<endl;
			char* ptr2=new char[change1.length()+1];
			change1.copy(ptr2,change1.length(),0);//�ƻs�r��string(�m�J�r��,����,�_�l��m)
			ptr2[change1.length()]='\0';
			cout<<"ptr2= "<<ptr2<<endl;
			for(int i=0; i<change1.length(); i++)
			{
				cout<<"ptr2["<<i<<"]= "<<ptr2[i]<<endl;
			}
			delete ptr2;
			cout<<"----------------------------------------------------------------";
			cout<<"\niterator"<<endl;
			string iterator("test iterator");
			cout<<"�ݤ��X"<<endl; 
			string::const_iterator iterator1=iterator.begin();
			while(iterator1!=iterator.end())
			{
				cout<<*iterator1<<" ";
				iterator1++;
			}
			cout<<endl;
			string::const_reverse_iterator iterator2=iterator.rend();
			while(iterator2!=iterator.rbegin())
			{
				iterator2--;
				cout<<*iterator2<<" ";
			}
			cout<<endl;
			string::const_reverse_iterator iterator3=iterator.rbegin();
			while(iterator3!=iterator.rend())
			{
				cout<<*iterator3<<" ";
				iterator3++;
			}
			cout<<endl;
			cout<<"----------------------------------------------------------------";
		}
};

class Sstream
{
	public:
		void print()
		{
			cout<<"\nsstream ��X"<<endl;
			ostringstream output;
			string st1("int= ");
			int v=100;
			output<<st1<<v;
			cout<<"output.str():\n"<<output.str()<<endl;
			output<<"!!!!!";
			cout<<"output.str():\n"<<output.str()<<endl;
			cout<<"----------------------------------------------------------------";
			cout<<"\nsstream ��J"<<endl;
			string input("A 100 0.5");
			istringstream Input(input);
			string st3;
			int vi;
			double vd;
			Input>>st3>>vi>>vd;
			cout<<"st3= "<<st3
				<<"\nvi = "<<vi
				<<"\nvd = "<<vd<<endl;
			if(Input.good())
			{
				cout<<"good"<<endl;
			}
			else
			{
				cout<<"empty"<<endl;
			}
			cout<<"----------------------------------------------------------------\n";
		}	
};
int main(int argc, char** argv) 
{
	Old test1;
	test1.print();
	
	New test2;
	test2.print();
	
	Sstream test3;
	test3.print();
	system("pause");
}
