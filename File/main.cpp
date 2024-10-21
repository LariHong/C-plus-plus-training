#include <iostream>
#include <string>
#include <fstream>   //Ū�� �g�� 
using namespace std;

class Fileoutput
{
	public:
		
		void print()
		{
			//��J��ios::out�Bofstream/fstream �L�ɳ��|���� 
			ofstream file1("test.txt",ios::out);
			
			if(!file1)
			{
				cerr<<"XXXXX"<<endl;
				exit(1);
			}
			
			int a;
			string s;
			
			cout<<"��J �Ʀr �r��(eof����)"<<endl; 
			while(cin>>a>>s)
			{
				file1<<a<<"   "<<s<<endl;
				cout<<"��J �Ʀr �r��(eof����)"<<endl; 
			}
			
			cout<<"test.txt �H�g�J��"<<endl; 
			cin.clear();
			file1.clear();
			
		}
};

class Fileopen
{
	public:
		
		void print()
		{
			ifstream file2("test.txt",ios::in);
			
			if(!file2)
			{
				cerr<<"XXXXX"<<endl;
				exit(1);
			}
			
			int a;
			string s;
			
 
			while(file2>>a>>s)
			{
				cout<<"�Ʀr ��r"<<endl;
				cout<<a<<"   "<<s<<endl;
				 
			}
			cout<<"Ū�ɵ���"<<endl; 
			file2.close();
		}
};

class AteandApp
{
	public:
		void print()
		{
			string s="abc";
			string s1;
			
			//ofstream file1; //�p�G�S���ɥ��� ���ɫh�b��J�b���
			//file1.open("test1.txt",ios::app|ios::out);
			//file1<<s;										 
			
			
			//ofstream file2;
			//file2.open("test1.txt",ios::app|ios::in);//�S�ɥi�H���� ���O�o����Ū�� 
			//file2<<s;
				
			
			//ofstream file3("test1.txt",ios::ate|ios::out);//�p�G�S���ɥ��� ���ɫh�M�� 
			//file3<<s;
			
			//ofstream file4("test1.txt",ios::ate|ios::in);//�p�G�S���ɥ��� 
			//file4<<s;									 //���ɫh�g�J�̧��ݦ��O����Ū�� 
			
			
			//ifstream file5("test1.txt",ios::app|ios::out);//�S�ɥi�H���� �o����g�� 
			//file5>>s1;
			//cout<<s1;
			
			//ifstream file6("test1.txt",ios::app|ios::in);
			//file6>>s1;
			//cout<<s1;
			
			//ifstream file7("test1.txt",ios::ate|ios::out);//�p�G�S���ɥ���
			//file7>>s1;								    //���ɫ��w��̧��ݦ��O����g��
			//cout<<s1;									    //�g�ɥ��� 
			
			//ifstream file8("test1.txt",ios::ate|ios::in);   //������ 
			//file8>>s1;									  
			//cout<<s1;
			
			//fstream file9("test1.txt",ios::app|ios::out);//�p�G�S���ɥ��� ���ɫh�b��J�b���
			
			//fstream file10("test1.txt",ios::app|ios::in);//�p�G�S���ɥ��� �i�H�g�ɤ���Ū�� 
			
			//fstream file11("test1.txt",ios::ate|ios::out);;//�p�G�S���ɥ��� ���ɫh�M��
			
			//fstream file12("test1.txt",ios::ate|ios::in); //����S�ɥ��� ����Ū�M�g 
			
			//fstream file13("test1.txt",ios::ate|ios::out|ios::in);//�p�G�S���ɡA�h���}���ѡA���ɫh�w����ɮ׵��� 
 
		}
};

class SeekgandSeekpandTellpandTellg
{
	public:
		void SeekpandTellp()
		{
			ofstream file1("test2.txt",ios::out);
			file1.seekp(0,ios::cur); //��l���A �ҥH�����ɶ}�Y 
		
			//tellp(ofstream/fstream �ϥ�) ���X�B�Хثe��} 
			cout<<"tellP= "<<file1.tellp()<<endl;//��l���A �ҥH�����ɶ}�Y   0 
			
			string s="abc";
			string s1="bbc";
			
			file1<<s;				//�g�J�ᬰabc 
			cout<<"tellP= "<<file1.tellp()<<endl; //tellp�|���X�B�Хثe��}  3 
			
			//ios::beg �q�_�l�}�l  ios::end �q���ݶ}�l 
			file1.seekp(-1,ios::cur);	//�j�M�B�Хѥثe��} ����1               2 
			
			file1<<s1;             // �g�J��abc��c�Qbbc��\��   ��abbbc 
			cout<<"tellP= "<<file1.tellp()<<endl;//tellp�|���X�B�Хثe��}   5 
			
			cout<<"���Ӭݤ���"<<endl; 
			file1.close();
		}
		
		void SeekgandTellg()
		{
			ifstream file2("test2.txt",ios::in);
			string s;
			cout<<"tellG= "<<file2.tellg()<<endl;//�i�D�ثe�B�Ц�} �̤@�}�Y 
			file2.seekg(1,ios::cur);//�i�D�ثe�B�Ц�} �V��1��}
			cout<<"tellG= "<<file2.tellg()<<endl;
			file2>>s;
			cout<<"test2.txt= "<<s<<endl; //bbbc 
			cout<<"tellG= "<<file2.tellg()<<endl;//��X����	��"-1"��}	
			cout<<"���Ӭݤ���"<<endl;
			file2.close();
		}
};

class Project1
{
	public:
		
		enum requestType {ZEro=1,credit,debit,end};
		
		int getRequest()
	 	{
	 		int request;
	 			
	 		do
	 		{
	 			cout<<"1.�H�ιs"<<endl; 
	 			cout<<"2.�H�έt"<<endl; 
	 			cout<<"3.�H�Υ�"<<endl; 
	 			cout<<"4.END"<<endl; 
	 			cin>>request;
	 			if(request<ZEro || request>end)
	 			{
	 				cout<<"��J���~ ���s��J"<<endl; 
				}
			}
			while(request<1 && request>end);
			
			return request;
		}
		
		bool shouldDisplay(int type, double balance)
		{
			if(type==ZEro && balance==0)
			 return true;
			if(type==credit && balance<0)
			 return true;
			if(type==debit && balance>0)
			 return true;
			
			return false;
		}
		
		void outputLine(int account,const string name,double balance)
		{
			cout<<"account= "<<account<<"   name= "<<name<<"   balance= "<<balance<<endl<<endl;
		}
	 	void print()
	 	{
	 		ifstream project1("project1.txt",ios::in);
	 		
	 		if(!project1)
	 		{
	 			cerr<<"XXXXX"<<endl;
	 			exit(1);
			}
			
			int request;
			int account;
			string name;
			double balance;
			
			
			cout<<"��J�A���ﶵ"<<endl; 
			request=getRequest();
			
			while(request!=end)
			{
				switch(request)
				{
					case ZEro:
						cout<<"�H��0"<<endl;
						break;
					case credit:
						cout<<"�H��-"<<endl;
						break;
					case debit:
						cout<<"�H��+"<<endl;
						break;
				}
				
				project1>>account>>name>>balance;
				
				while(!project1.eof())
				{
					if(shouldDisplay(request,balance))
					   outputLine(account,name,balance);
					 
					project1>>account>>name>>balance;
				}
				
				project1.clear();
				project1.seekg(0);
				
				request=getRequest();
			}
			
			cout<<"End"<<endl;
		}
};

class Project2
{
	public:
		
		Project2(int =0, string ="��",string ="��",double =0);
		
		void setAccountNumber(int v)
		{
			account=v;
		}
		int getAccountNumber()const
		{
			return account;
		}
		
		void setLastName(string s)
		{
			int length=s.size();
			length=(length<15 ? length : 14);
			s.copy(lastname,length);
			lastname[length]='\0';
		}
		string getLastName()const
		{
			return lastname;
		}
		
		void setFirstName(string s)
		{
			int length=s.size();
			length=(length<10 ? length : 9);
			s.copy(firstname,length);
			firstname[length]='\0';
		}
		string getFirstName()const
		{
			return firstname;
		}
		
		void setBalanceNumber(int v)
		{
			balance=v;
		}
		int getBalanceNumber()const
		{
			return balance;
		}
		
		void outputLine(ostream &output,const Project2 &r) //��X��function 
		{
			output<<r.getAccountNumber()<<"  "<<r.getLastName()<<"  "
			<<r.getFirstName()<<"  "<<r.getBalanceNumber()<<endl;
	
		}
		
		void print1()
		{
			ofstream project2("project2.txt",ios::out|ios::binary);
			cout<<"\n�гy project2.txt"<<endl; 
			if(!project2)
			{
				cerr<<"XXXXXXX"<<endl;
				exit(1);
			}
			
			Project2 projtest;
			cout<<"�Х�10���ɮתŶ�"<<endl;
			for(int i=0; i<10; i++)
			{
				project2.write(reinterpret_cast<const char*>(&projtest),sizeof(Project2));
			}
			project2.close();
			
			
			cout<<"\n\n��X��l���A"<<endl;
			ifstream project21("project2.txt",ios::in|ios::binary);
			
			if(!project21)
			{
				cerr<<"XXXXXXX"<<endl;
				exit(1);
			}
			
			project21.read(reinterpret_cast<char*>(&projtest),sizeof(Project2));
			
			while(project21 && !project21.eof())
			{
				if(projtest.getAccountNumber()>=0)
				{
					outputLine(cout,projtest);
				}
		
				project21.read(reinterpret_cast<char*>(&projtest),sizeof(Project2));
			}
			project21.close();
			
			cout<<"\nproject2.txt �H�g�J��"<<endl; 
		}
		
		void print2()
		{
			int account;
			string lastname;
			string firstname;
			double balance;
			
			fstream project3("project2.txt",ios::in|ios::out|ios::binary);
			
			if(!project3)
			{
				cerr<<"XXXX"<<endl;
				exit(1);
			}
		
			cout<<"��J�b��(1��10)"<<endl;
			
			Project2 projtest2;
			cin>> account;
			
			while(account>0 && account<=10)
			{
				cout<<"��J lastname,firstname,balance"<<endl;
				cin >>lastname>>firstname>>balance;
				
				projtest2.setAccountNumber(account);
				projtest2.setLastName(lastname);
				projtest2.setFirstName(firstname);
				projtest2.setBalanceNumber(balance);
				
				project3.seekp((projtest2.getAccountNumber()-1)*sizeof(Project2) );
				project3.write(reinterpret_cast<const char*>(&projtest2),sizeof(Project2));
				
				cout<<"��J�b��(1��10)"<<endl;
				cin>> account;
			}
			project3.close();
			
			ifstream project4("project2.txt",ios::in|ios::binary);
	
			if(!project4)
			{
				cerr<<"XXXX"<<endl;
				exit(1);
			}
	
			Project2 projtest3;
	
			project4.read(reinterpret_cast<char*>(&projtest3),sizeof(Project2));
			
			cout<<"\n��X�ثe�����A"<<endl;
			cout<<"account"<<"  "<<"LastName"<<"  "
			<<"FirstName"<<"  "<<"BalanceNumber"<<endl;
			
			while(project4 && !project4.eof())
			{
				
				if(projtest3.getAccountNumber()!=0)
				{
					
					outputLine(cout,projtest3);
				}
		
				project4.read(reinterpret_cast<char*>(&projtest3),sizeof(Project2));
			}
			project4.close();
		}
		
	private:
		int account;
		char lastname[15];
		char firstname[10];
		double balance;
};

Project2::Project2(int accountV, string lastnameV,string firstnameV,double balV)
{
		setAccountNumber(accountV);
		setLastName(lastnameV);
		setFirstName(firstnameV);
		setBalanceNumber(balV);
		
}

class Project3 :public Project2 
{
	public:
		
		enum Choices{Print=1,Update,Add,Delete,End};
		
		int enterchoice()
		{
			cout<<"�п�J�A�����"<<endl;
			cout<<"1. �s�Jproject3.txt"<<endl; 
			cout<<"2. ��s�@�b��"<<endl;
			cout<<"3. �W�[�@�b��"<<endl;
			cout<<"4. �R���@�b��"<<endl;
			cout<<"5. END"<<endl;
				
			int menuchoice;
			cin>>menuchoice;
			return menuchoice;
		}
		
		void creattextfile(fstream &readfromfile)
		{
			ofstream outprintfile("project3.txt",ios::out);
			cout<<"\n�гy project3.txt"<<endl;
			if (!outprintfile)
			{
				cout<<"XXXXXXXX"<<endl;
				exit(1);
			}
			
			outprintfile<<"Account   "<<"Lastname   "
						<<"Firstname   "<<"Balance"<<endl;
			
			readfromfile.seekg(0);
			
			Project2 creat;
			readfromfile.read(reinterpret_cast<char*>(&creat),sizeof(Project2));
			
			while(!readfromfile.eof())
			{
				if(creat.getAccountNumber()>=0)
				{
					outputLine(outprintfile,creat);
					readfromfile.read(reinterpret_cast<char*>(&creat),sizeof(Project2));
					
				}
			}
			outprintfile.clear(); 
			cout<<"project3.txt �H�g�J��"<<endl;
			
		}
		
		int getAccount(const char* const prompt)
		{
			int accountnumber;
			
			do
			{
				cout<<prompt<<"(1 - 10)";
				cin >>accountnumber;
				
			}while(accountnumber<1 || accountnumber>10);
			
			return accountnumber;
		}
		
		void updateRecord(fstream& updateFile)
		{
			int accountnumber=getAccount("��J�n��s�b��");
			
			updateFile.seekg( (accountnumber-1) * sizeof(Project2) );
			
			Project2 update;
			
			updateFile.read(reinterpret_cast<char*>(&update),sizeof(Project2));
			
			if(update.getAccountNumber()>=0)
			{
				outputLine(cout,update);
				
				cout<<"\n ��Jcharge(+) of payment(-): \n";
				double transaction;
				cin >> transaction;
				
				double oldBalance =update.getBalanceNumber();
				update.setBalanceNumber(oldBalance+transaction);
				
				updateFile.seekg( (accountnumber-1) * sizeof(Project2) );
				
				updateFile.write(reinterpret_cast<const char*>(&update),sizeof(Project2));
				
			}
			else
			{
				cerr<<"Account #"<<accountnumber
				<<"�S���"<<endl; 
			}
		}
		
		void newRecord(fstream &insertInfile)
		{
			int accountnumber=getAccount("��J�s�b��");
			
			insertInfile.seekg( (accountnumber-1) * sizeof(Project2) );
			
			Project2 New;
			insertInfile.read(reinterpret_cast<char*>(&New),sizeof(Project2));
			
			if(New.getAccountNumber()==0)
			{
				string lastname;
				string firstname;
				double balance;
				
				cout<<"\n��Jlastname firstname balance"<<endl;
				cin>>lastname>>firstname>>balance;
				
				New.setAccountNumber(accountnumber);
				New.setLastName(lastname);
				New.setFirstName(firstname);
				New.setBalanceNumber(balance);
				
				insertInfile.seekg( (accountnumber-1) * sizeof(Project2) );
				insertInfile.write(reinterpret_cast<const char*>(&New),sizeof(Project2));
				
			}
			else
			{
				cerr<<"Account #"<<accountnumber
				<<"�w�g�����"<<endl; 
			}
			
		}
		
		void deleteRecord(fstream& deleteFromfile)
		{
			int accountnumber=getAccount("��J�R���b��");
			
			deleteFromfile.seekg( (accountnumber-1) * sizeof(Project2) );
			
			Project2 Delete;
			deleteFromfile.read(reinterpret_cast<char*>(&Delete),sizeof(Project2));
			
			if(Delete.getAccountNumber()!=0)
			{
				deleteFromfile.seekg( (accountnumber-1) * sizeof(Project2) );
				
				Project2 Empty;
				
				deleteFromfile.write(reinterpret_cast<const char*>(&Empty),sizeof(Project2));
			
				cerr<<"Account #"<<accountnumber<<" �R��"<<endl; 
			}
			else
			{
				cerr<<"Account #"<<accountnumber
				<<"��"<<endl; 
			}
		}
		
		void print()
		{
			fstream project("project2.txt",ios::in|ios::out|ios::binary);	
			
			if(!project)
			{
				cout<<"XXXX"<<endl;
				exit(1);
			}
			
			int choice;
			enum Choices{Print=1,Update,Add,Delete,End};
			while( (choice=enterchoice())!= End)
			{
				switch (choice)
				{
					case Print:
						creattextfile(project);
						break;
						
					case Update:
						updateRecord(project);
						break;
						
					case Add:
						newRecord(project);
						break;
						
					case Delete:
						deleteRecord(project);
						break;
					
					default:
						cerr<<"���~��J"<<endl;
						break; 
				}
				
				project.clear();
			}
		}
};

int main(int argc, char** argv) 
{
	cout<<"�g��"<<endl; 
	Fileoutput test1;
	test1.print();
	
	cout<<"\nŪ��"<<endl;
	Fileopen test2;
	test2.print();
	
	AteandApp test3;//�Ь�class������ 
	//test3.print();	
	
	cout<<"\nseekp/seekg and tellp/tellg"<<endl;
	SeekgandSeekpandTellpandTellg test4;
	test4.SeekpandTellp();
	test4.SeekgandTellg();
	
	cout<<"\n�qproject1.txt Ū�X�ɮ�"<<endl;
	Project1 test5;
	test5.print();
	
	cout<<"\n�H���s���ɮ�"<<endl; 
	Project2 test6;
	test6.print1();
	
	cout<<"\n�qproject2.txt Ū�X�ɮ� �åB�ϥΨ�10�ӪŶ�"<<endl;
	test6.print2();
	
	cout<<"\n�H���s���ɮ� ��X�m��"<<endl;
	cout<<"�qproject2.txt(�g test6����)����ƨӰ���@"<<endl;
	Project3 test7;
	test7.print();
	
	return 0;
}
