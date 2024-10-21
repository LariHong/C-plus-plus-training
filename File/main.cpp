#include <iostream>
#include <string>
#include <fstream>   //讀檔 寫檔 
using namespace std;

class Fileoutput
{
	public:
		
		void print()
		{
			//當遇到ios::out且ofstream/fstream 無檔都會創黨 
			ofstream file1("test.txt",ios::out);
			
			if(!file1)
			{
				cerr<<"XXXXX"<<endl;
				exit(1);
			}
			
			int a;
			string s;
			
			cout<<"輸入 數字 字串(eof結束)"<<endl; 
			while(cin>>a>>s)
			{
				file1<<a<<"   "<<s<<endl;
				cout<<"輸入 數字 字串(eof結束)"<<endl; 
			}
			
			cout<<"test.txt 以寫入值"<<endl; 
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
				cout<<"數字 文字"<<endl;
				cout<<a<<"   "<<s<<endl;
				 
			}
			cout<<"讀檔結束"<<endl; 
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
			
			//ofstream file1; //如果沒有檔生檔 有檔則在輸入在後端
			//file1.open("test1.txt",ios::app|ios::out);
			//file1<<s;										 
			
			
			//ofstream file2;
			//file2.open("test1.txt",ios::app|ios::in);//沒檔可以生檔 但是卻不能讀檔 
			//file2<<s;
				
			
			//ofstream file3("test1.txt",ios::ate|ios::out);//如果沒有檔生檔 有檔則清空 
			//file3<<s;
			
			//ofstream file4("test1.txt",ios::ate|ios::in);//如果沒有檔失敗 
			//file4<<s;									 //有檔則寫入最尾端但是不能讀檔 
			
			
			//ifstream file5("test1.txt",ios::app|ios::out);//沒檔可以生檔 卻不能寫檔 
			//file5>>s1;
			//cout<<s1;
			
			//ifstream file6("test1.txt",ios::app|ios::in);
			//file6>>s1;
			//cout<<s1;
			
			//ifstream file7("test1.txt",ios::ate|ios::out);//如果沒有檔失敗
			//file7>>s1;								    //有檔指定位最尾端但是不能寫檔
			//cout<<s1;									    //寫檔失效 
			
			//ifstream file8("test1.txt",ios::ate|ios::in);   //都失敗 
			//file8>>s1;									  
			//cout<<s1;
			
			//fstream file9("test1.txt",ios::app|ios::out);//如果沒有檔生檔 有檔則在輸入在後端
			
			//fstream file10("test1.txt",ios::app|ios::in);//如果沒有檔生檔 可以寫檔不能讀檔 
			
			//fstream file11("test1.txt",ios::ate|ios::out);;//如果沒有檔生檔 有檔則清空
			
			//fstream file12("test1.txt",ios::ate|ios::in); //不能沒檔生檔 不能讀和寫 
			
			//fstream file13("test1.txt",ios::ate|ios::out|ios::in);//如果沒有檔，則打開失敗，有檔則定位到檔案結尾 
 
		}
};

class SeekgandSeekpandTellpandTellg
{
	public:
		void SeekpandTellp()
		{
			ofstream file1("test2.txt",ios::out);
			file1.seekp(0,ios::cur); //初始狀態 所以為文檔開頭 
		
			//tellp(ofstream/fstream 使用) 指出浮標目前位址 
			cout<<"tellP= "<<file1.tellp()<<endl;//初始狀態 所以為文檔開頭   0 
			
			string s="abc";
			string s1="bbc";
			
			file1<<s;				//寫入後為abc 
			cout<<"tellP= "<<file1.tellp()<<endl; //tellp會指出浮標目前位址  3 
			
			//ios::beg 從起始開始  ios::end 從末端開始 
			file1.seekp(-1,ios::cur);	//搜尋浮標由目前位址 往左1               2 
			
			file1<<s1;             // 寫入後abc的c被bbc改蓋住   為abbbc 
			cout<<"tellP= "<<file1.tellp()<<endl;//tellp會指出浮標目前位址   5 
			
			cout<<"祥細看內文"<<endl; 
			file1.close();
		}
		
		void SeekgandTellg()
		{
			ifstream file2("test2.txt",ios::in);
			string s;
			cout<<"tellG= "<<file2.tellg()<<endl;//告訴目前浮標位址 最一開頭 
			file2.seekg(1,ios::cur);//告訴目前浮標位址 向後1位址
			cout<<"tellG= "<<file2.tellg()<<endl;
			file2>>s;
			cout<<"test2.txt= "<<s<<endl; //bbbc 
			cout<<"tellG= "<<file2.tellg()<<endl;//輸出完後	為"-1"位址	
			cout<<"祥細看內文"<<endl;
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
	 			cout<<"1.信用零"<<endl; 
	 			cout<<"2.信用負"<<endl; 
	 			cout<<"3.信用正"<<endl; 
	 			cout<<"4.END"<<endl; 
	 			cin>>request;
	 			if(request<ZEro || request>end)
	 			{
	 				cout<<"輸入錯誤 重新輸入"<<endl; 
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
			
			
			cout<<"輸入你的選項"<<endl; 
			request=getRequest();
			
			while(request!=end)
			{
				switch(request)
				{
					case ZEro:
						cout<<"信用0"<<endl;
						break;
					case credit:
						cout<<"信用-"<<endl;
						break;
					case debit:
						cout<<"信用+"<<endl;
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
		
		Project2(int =0, string ="空",string ="空",double =0);
		
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
		
		void outputLine(ostream &output,const Project2 &r) //輸出的function 
		{
			output<<r.getAccountNumber()<<"  "<<r.getLastName()<<"  "
			<<r.getFirstName()<<"  "<<r.getBalanceNumber()<<endl;
	
		}
		
		void print1()
		{
			ofstream project2("project2.txt",ios::out|ios::binary);
			cout<<"\n創造 project2.txt"<<endl; 
			if(!project2)
			{
				cerr<<"XXXXXXX"<<endl;
				exit(1);
			}
			
			Project2 projtest;
			cout<<"創立10個檔案空間"<<endl;
			for(int i=0; i<10; i++)
			{
				project2.write(reinterpret_cast<const char*>(&projtest),sizeof(Project2));
			}
			project2.close();
			
			
			cout<<"\n\n輸出初始狀態"<<endl;
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
			
			cout<<"\nproject2.txt 以寫入值"<<endl; 
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
		
			cout<<"輸入帳號(1到10)"<<endl;
			
			Project2 projtest2;
			cin>> account;
			
			while(account>0 && account<=10)
			{
				cout<<"輸入 lastname,firstname,balance"<<endl;
				cin >>lastname>>firstname>>balance;
				
				projtest2.setAccountNumber(account);
				projtest2.setLastName(lastname);
				projtest2.setFirstName(firstname);
				projtest2.setBalanceNumber(balance);
				
				project3.seekp((projtest2.getAccountNumber()-1)*sizeof(Project2) );
				project3.write(reinterpret_cast<const char*>(&projtest2),sizeof(Project2));
				
				cout<<"輸入帳號(1到10)"<<endl;
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
			
			cout<<"\n輸出目前的狀態"<<endl;
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
			cout<<"請輸入你的抉擇"<<endl;
			cout<<"1. 存入project3.txt"<<endl; 
			cout<<"2. 更新一帳號"<<endl;
			cout<<"3. 增加一帳號"<<endl;
			cout<<"4. 刪除一帳號"<<endl;
			cout<<"5. END"<<endl;
				
			int menuchoice;
			cin>>menuchoice;
			return menuchoice;
		}
		
		void creattextfile(fstream &readfromfile)
		{
			ofstream outprintfile("project3.txt",ios::out);
			cout<<"\n創造 project3.txt"<<endl;
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
			cout<<"project3.txt 以寫入值"<<endl;
			
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
			int accountnumber=getAccount("輸入要更新帳號");
			
			updateFile.seekg( (accountnumber-1) * sizeof(Project2) );
			
			Project2 update;
			
			updateFile.read(reinterpret_cast<char*>(&update),sizeof(Project2));
			
			if(update.getAccountNumber()>=0)
			{
				outputLine(cout,update);
				
				cout<<"\n 輸入charge(+) of payment(-): \n";
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
				<<"沒資料"<<endl; 
			}
		}
		
		void newRecord(fstream &insertInfile)
		{
			int accountnumber=getAccount("輸入新帳號");
			
			insertInfile.seekg( (accountnumber-1) * sizeof(Project2) );
			
			Project2 New;
			insertInfile.read(reinterpret_cast<char*>(&New),sizeof(Project2));
			
			if(New.getAccountNumber()==0)
			{
				string lastname;
				string firstname;
				double balance;
				
				cout<<"\n輸入lastname firstname balance"<<endl;
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
				<<"已經有資料"<<endl; 
			}
			
		}
		
		void deleteRecord(fstream& deleteFromfile)
		{
			int accountnumber=getAccount("輸入刪除帳號");
			
			deleteFromfile.seekg( (accountnumber-1) * sizeof(Project2) );
			
			Project2 Delete;
			deleteFromfile.read(reinterpret_cast<char*>(&Delete),sizeof(Project2));
			
			if(Delete.getAccountNumber()!=0)
			{
				deleteFromfile.seekg( (accountnumber-1) * sizeof(Project2) );
				
				Project2 Empty;
				
				deleteFromfile.write(reinterpret_cast<const char*>(&Empty),sizeof(Project2));
			
				cerr<<"Account #"<<accountnumber<<" 刪除"<<endl; 
			}
			else
			{
				cerr<<"Account #"<<accountnumber
				<<"空"<<endl; 
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
						cerr<<"錯誤輸入"<<endl;
						break; 
				}
				
				project.clear();
			}
		}
};

int main(int argc, char** argv) 
{
	cout<<"寫檔"<<endl; 
	Fileoutput test1;
	test1.print();
	
	cout<<"\n讀檔"<<endl;
	Fileopen test2;
	test2.print();
	
	AteandApp test3;//請看class內註解 
	//test3.print();	
	
	cout<<"\nseekp/seekg and tellp/tellg"<<endl;
	SeekgandSeekpandTellpandTellg test4;
	test4.SeekpandTellp();
	test4.SeekgandTellg();
	
	cout<<"\n從project1.txt 讀出檔案"<<endl;
	Project1 test5;
	test5.print();
	
	cout<<"\n隨機存取檔案"<<endl; 
	Project2 test6;
	test6.print1();
	
	cout<<"\n從project2.txt 讀出檔案 並且使用那10個空間"<<endl;
	test6.print2();
	
	cout<<"\n隨機存取檔案 綜合練習"<<endl;
	cout<<"從project2.txt(經 test6之後)的資料來做實作"<<endl;
	Project3 test7;
	test7.print();
	
	return 0;
}
