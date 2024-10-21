#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

ostream& bell(ostream& output)	//自定義 "逼"聲 
{
	return output<<"\a";
}

ostream& cr(ostream& output)	//自定義 回到最開頭 
{
	return output<<"\r";
}

ostream& tab(ostream& output)	//自定義 空行 
{
	return output<<"\t";
}

ostream& el(ostream& output)	//自定義 換行 
{
	return output<<"\n";
}
		
class PutandBoolalpha
{
	public:
		void print()
		{
			cout<<"cout.put()用法"<<endl;
			cout.put('1').put('+').put('1').put('\n');
			cout.put('B').put('\n');
			
			cout<<"boolalpha用法"<<endl;
			bool v=true;
		
			cout<<v<<endl;
			cout<<boolalpha<<v<<endl;
			cout<<noboolalpha<<v<<endl;
			
			v=false;
			cout<<v<<endl;
			cout<<boolalpha<<v<<endl;
			cout<<noboolalpha<<v<<endl;
			
		}
};

class PeekandPutback
{
	public:	
		void print1()
		{
			char c;
			int n;
			char str[256];
			cout<<"\n此處介紹 cin.putback()使用"<<endl;
			cout << "Enter a number or a word: "; 
			c=cin.get();			//從串流中抓出1個出來
			 
			if((c>='0')&&(c<='9'))
			{
				cin.putback(c);		//將c丟回串流中 
				cin>>n;
				cout << "You have entered number " << n << endl;
			}
			else
			{
				cin.putback(c);
				cin>>str;
				cout << " You have entered word " << str << endl;
			}
			
		}
		
		void print2()
		{
			char c;
			int n;
			char str[256];
			cout<<"\n此處介紹cin.peek()使用"<<endl;
			cout << "Enter a number or a word: "; 
			c=cin.peek();   //他會讀取串流的字 並不會將他從串流中移除 
							//get+putback結合 
			if((c>='0')&&(c<='9'))
			{
				cin>>n;
				cout << "You have entered number " << n << endl;
			}
			else
			{
				cin>>str;
				cout << " You have entered word " << str << endl;
			}
		}
};

class BaseandInternalandFill
{
	public:
		void print()
		{
			cout<<"\nBace 和 給正數 和 塞字"<<endl;
			int v,v2;
			cout<<"輸入一個數字"<<endl;
			cin>>v;
			v2=v;
			cout<<"v= "<<v<<endl;
			cout<<"v(oct)= "<<oct<<v<<endl; //8進位 
			cout<<"v(hex)= "<<hex<<v<<endl;
			cout<<"v(dec)= "<<dec<<v<<endl;
			cout<<"v(setbase(16))= "<<setbase(16)<<v<<endl; //setbase 給基底 
			cout<<setbase(10);
			
			cout<<"\n\nAfter showbas:\n";
			cout<<showbase;	//展示出 base 數字2為例 8進位:02  10進位:2 16進位"0x2 
			
			cout<<"v2= "<<internal<<showpos<<setfill('o')<<setw(8)<<v2<<endl;
			//internal顯示正數,showpos印出正號,setfill塞字 
			cout<<"v2(oct)= "<<oct<<setw(8)<<v2<<endl;
			cout<<"v2(hex)= "<<hex<<setw(8)<<v2<<endl;
			cout<<"v2(dec)= "<<dec<<setw(8)<<v2<<endl;
			cout<<"v2(setbase(16))= "<<setbase(16)<<setw(8)<<v2<<endl;
			
			cout<<noshowbase;
			cout<<noshowpos;
			
		}	
};

class ReadandWrite
{
	public:
		void print()
		{
			int size=10;
			char A[size];
			cout<<"\n介紹 cin.read cout.write"<<endl;
			cout<<"輸入一串字(10)"<<endl; 
			cin.read(A,size); //讀取A中的前size數量的字數 
			cout.write(A,cin.gcount())<<endl; //cin.gcount() 為之前cin.XXX所擷取的量 
			
			cin.clear(); 
			cin.sync();	//兩行同時存在 串流完全清除 
		}	
};

class Showpoint
{
	public:
		void print()
		{
			cout<<"\n顯示小數點後的位數"<<endl;
			cout<<"9.9900     "<<9.9900<<endl;
			cout<<"9.9000     "<<9.9000<<endl;
			cout<<"9.0000     "<<9.0000<<endl;
			
			cout<<showpoint<<endl; 
			
			cout<<"9.9900     "<<9.9900<<endl;
			cout<<"9.9000     "<<9.9000<<endl;
			cout<<"9.0000     "<<9.0000<<endl;
		}	
};

class Precision
{
	public:
		void print()
		{
			double n=sqrt(2.0);
			
			cout<<"\n精準度的使用"<<endl;
			cout<<"n= "<<n<<endl;
			
			cout.precision(3);
			cout<<"n(cout.precision(3))= "<<n<<endl;	//3個數字 
			cout<<fixed<<"n(fixed cout.precision(3))= "<<n<<endl;//小數點後3個數字 
			
			cout<<"n= "<<n<<endl;
			cout<<fixed<<setprecision(6)<<"n(fixed setprecision(6))= "<<n<<endl;
			
		}	
};

class ScientificandUppercase
{
	public:
		void print()
		{
			cout<<"\n顯示科學記號和大寫"<<endl; 
			double x=0.01234567;
			double y=1.946e9;
			
			cout<<x<<"\t"<<y<<endl;
			
			cout<<scientific<<x<<"\t"<<y<<endl;
			
			cout<<scientific<<uppercase<<x<<"\t"<<y<<endl;
			
			cout<<nouppercase<<x<<"\t"<<y<<endl;
			
			
		}	
};

class Width
{
	public:
		void print()
		{
			cout<<"\nwidth 使用"<<endl;
			int wv=4;
			char sen[10];
			
			cin.width(5);//擷取4個字 
			cout<<"輸入一些字串 EOF 離開"<<endl;
			while(cin>>sen) //cin遇空白則換下一輪 
			{
				cout.width(wv++);
				cout<<setfill('*')<<sen<<endl;
				cin.width(5);
				
			}
		}	
};

class UserDef
{
	
	public:
		void print()
		{
			cout<<"\n 使用者自定義"<<endl;
			cout<<bell; //發出逼聲 
			cout<<"a"<<el;//el 取代endl 
			cout<<"bb123"<<tab<<"c"<<cr<<"d"<<el;
			//本應該是bb123	  c  因為cr回到最前段則變成 db123   c	
		}
			
};

class AlignmentandFill
{
	public:
		void print()
		{
			cout<<"\n對齊"<<endl;
			int x;
			cout<<"輸入一個數字"<<endl;
			while(cin>>x)
			{
				cout<<setw(10)<<x<<endl;
			
				cout.fill('x');	//前面加個cout<< 會多一個值 
				cout<<left<<setw(10)<<x<<endl;
			
				cout<<right<<setw(10)<<setfill('c')<<x<<endl;
				
				cout<<setfill(' ');
			}
		}	
};

class Flag
{
	public:
		void print()
		{
			cout<<"\n串流內的flag使用"<<endl;
			ios::fmtflags f;  //固定的型態 

    		cout.unsetf(ios::dec); //將10進位關掉 
    		cout.setf(ios::oct | ios::showbase); //打開8進位和顯示進位 

    		f = cout.flags(); //設定狀態給f 

    		if(f & ios::left) 
			{
        		cout << "left flag on\n"; 
    		}
    		else 
			{
        		cout << "left flag off\n"; 
    		}

    		if(f & ios::dec) 
			{
       		 	cout << "dec flag on\n";
   		 	}
    		else 
			{
    		    cout << "dec flag off\n"; 
    		}

    		if(f & ios::showbase) 
			{
    		    cout << "showbase flag on\n"; 
    		}
    		else 
			{
     		 	cout << "showbase flag off\n"; 
   			}

    		if(f & ios::oct) 
			{
     		    cout << "oct flag on\n"; 
    		}
    		else 
			{
        		cout << "left flag off\n"; 
    		}		
		}	
};

class Error
{
	public:
		void print()
		{
			cout<<"\n一些串流錯誤的情況"<<endl;
			int v;
			
			cout<<"將failbit設定成1"<<endl;
			cin.clear(ios::failbit);
			cout<<"\ncin.rdstate()= "<<cin.rdstate()
				<<"\ncin.eof()    = "<<cin.eof()
				<<"\ncin.fail()   = "<<cin.fail()
				<<"\ncin.bad()    = "<<cin.bad()
				<<"\ncin.good()   = "<<cin.good()<<endl<<endl;
			cin.clear();
			
			cout<<"\n回復初始"<<endl;
			cout<<"\ncin.rdstate()= "<<cin.rdstate()
				<<"\ncin.eof()    = "<<cin.eof()
				<<"\ncin.fail()   = "<<cin.fail()
				<<"\ncin.bad()    = "<<cin.bad()
				<<"\ncin.good()   = "<<cin.good()<<endl<<endl;
				
			cout<<"請故意輸入一字元"<<endl;	
			cin>>v;
			
			cout<<"\ncin.rdstate()= "<<cin.rdstate()
				<<"\ncin.eof()    = "<<cin.eof()
				<<"\ncin.fail()   = "<<cin.fail()
				<<"\ncin.bad()    = "<<cin.bad()
				<<"\ncin.good()   = "<<cin.good()<<endl;
			
			cin.clear();
			cout<<"\ncin.fail()   = "<<cin.fail()
				<<"\ncin.good()   = "<<cin.good()<<endl;
				
			cin.clear();
			cin.sync();
		}	
};

class Promble
{
	public:
		void print()
		{
			cout<<"\n此處為問題"<<endl;
			int b;
			cout<<"輸入一些字 -1離開"<<endl;
			while(cin>>b)
			{
				if(b==-1)
				{
					cout<<"P eof= "<<cin.eof()<<endl;
					cin.ignore();
					break;
				}
				cout<<"b= "<<b<<endl;
				cout.put(b)<<endl;//會依ASCII碼來選出適當的值 
			}
			
			cout<<"GB eof= "<<cin.eof()<<endl;
			int c;
			cout<<"輸入一些字 EOF離開"<<endl;
			while((c=cin.get())!=EOF)//但每次只會抓一個值 
			{
				cout<<"c= "<<c<<endl;
				cout.put(c)<<endl; 
					
			}
			cout<<"GA eof= "<<cin.eof()<<endl;
			
			cin.clear();
			cin.sync();
		}
};

class Get
{
	public:
		void print1()
		{
			cout<<"cin, cin.get ,cin.getline 使用"<<endl;
			const int size=10;
			char O[size];
			char A[size];
			char B[size];
			
			cout<<"輸入123 456 789 101112 131415 161718 192021 222324 252627"<<endl;
			cin.get(O,size);	//get和getline都差不多 只是getline不會存分界符號 
			cout<<"O="<<O<<endl;

			cout<<endl;
			cin>>A;				//cin 碰到 空白則會 離開串流 
			cout<<"A="<<A<<endl;

			cout<<endl;
			cin.get(B,size);
			cout<<"B="<<B<<endl;
			
			for(int i=0; i<size; i++)
			{
				cout<<"B["<<i<<"]="<<B[i]<<" ";
			}
			cout<<endl;

		}
		
		void print2()
		{
			const int size=10;
			char C[size];
			
			cin.getline(C,size);
			cout<<"C="<<C<<endl;
			
			for(int i=0; i<size; i++)
			{
				cout<<"C["<<i<<"]="<<C[i]<<" ";
			}
			cout<<endl;
			cin.clear();	//getline 最後會讓串流給一個null導致錯誤 所以要使用clear來恢復 
			
			char D[size];
			cin.get(D,size);
			cout<<"D="<<D<<endl;
			for(int i=0; i<size; i++)
			{
				cout<<"D["<<i<<"]="<<D[i]<<" ";
			}
			cout<<endl;
			
			char E[size];
			cin.getline(E,size);
			cout<<"E="<<E<<endl;
			for(int i=0; i<size; i++)
			{
				cout<<"E["<<i<<"]="<<E[i]<<" ";
			}
			cout<<endl;
			cin.clear();
		}
};

int main(int argc, char** argv) 
{
	PutandBoolalpha test1;
	test1.print();
	
	PeekandPutback test2;
	test2.print1();
	test2.print2();
	
	BaseandInternalandFill test3;
	test3.print();
	
	ReadandWrite test4;
	test4.print();
	
	Showpoint test5;
	test5.print();
	
	Width test6;
	test6.print();
	
	UserDef test7;
	test7.print();
	
	Precision test8;
	test8.print();
	
	AlignmentandFill test9;
	test9.print();
	
	ScientificandUppercase test10;
	test10.print();
	
	Flag test11;
	test11.print();
	
	Error test12;
	test12.print();
	
	Promble test13;
	test13.print();
	
	Get test14;
	test14.print1();
	test14.print2();

	system("pause");
	return 0;
}
