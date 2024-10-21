#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

ostream& bell(ostream& output)	//�۩w�q "�G"�n 
{
	return output<<"\a";
}

ostream& cr(ostream& output)	//�۩w�q �^��̶}�Y 
{
	return output<<"\r";
}

ostream& tab(ostream& output)	//�۩w�q �Ŧ� 
{
	return output<<"\t";
}

ostream& el(ostream& output)	//�۩w�q ���� 
{
	return output<<"\n";
}
		
class PutandBoolalpha
{
	public:
		void print()
		{
			cout<<"cout.put()�Ϊk"<<endl;
			cout.put('1').put('+').put('1').put('\n');
			cout.put('B').put('\n');
			
			cout<<"boolalpha�Ϊk"<<endl;
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
			cout<<"\n���B���� cin.putback()�ϥ�"<<endl;
			cout << "Enter a number or a word: "; 
			c=cin.get();			//�q��y����X1�ӥX��
			 
			if((c>='0')&&(c<='9'))
			{
				cin.putback(c);		//�Nc��^��y�� 
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
			cout<<"\n���B����cin.peek()�ϥ�"<<endl;
			cout << "Enter a number or a word: "; 
			c=cin.peek();   //�L�|Ū����y���r �ä��|�N�L�q��y������ 
							//get+putback���X 
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
			cout<<"\nBace �M ������ �M ��r"<<endl;
			int v,v2;
			cout<<"��J�@�ӼƦr"<<endl;
			cin>>v;
			v2=v;
			cout<<"v= "<<v<<endl;
			cout<<"v(oct)= "<<oct<<v<<endl; //8�i�� 
			cout<<"v(hex)= "<<hex<<v<<endl;
			cout<<"v(dec)= "<<dec<<v<<endl;
			cout<<"v(setbase(16))= "<<setbase(16)<<v<<endl; //setbase ���� 
			cout<<setbase(10);
			
			cout<<"\n\nAfter showbas:\n";
			cout<<showbase;	//�i�ܥX base �Ʀr2���� 8�i��:02  10�i��:2 16�i��"0x2 
			
			cout<<"v2= "<<internal<<showpos<<setfill('o')<<setw(8)<<v2<<endl;
			//internal��ܥ���,showpos�L�X����,setfill��r 
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
			cout<<"\n���� cin.read cout.write"<<endl;
			cout<<"��J�@��r(10)"<<endl; 
			cin.read(A,size); //Ū��A�����esize�ƶq���r�� 
			cout.write(A,cin.gcount())<<endl; //cin.gcount() �����ecin.XXX���^�����q 
			
			cin.clear(); 
			cin.sync();	//���P�ɦs�b ��y�����M�� 
		}	
};

class Showpoint
{
	public:
		void print()
		{
			cout<<"\n��ܤp���I�᪺���"<<endl;
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
			
			cout<<"\n��ǫת��ϥ�"<<endl;
			cout<<"n= "<<n<<endl;
			
			cout.precision(3);
			cout<<"n(cout.precision(3))= "<<n<<endl;	//3�ӼƦr 
			cout<<fixed<<"n(fixed cout.precision(3))= "<<n<<endl;//�p���I��3�ӼƦr 
			
			cout<<"n= "<<n<<endl;
			cout<<fixed<<setprecision(6)<<"n(fixed setprecision(6))= "<<n<<endl;
			
		}	
};

class ScientificandUppercase
{
	public:
		void print()
		{
			cout<<"\n��ܬ�ǰO���M�j�g"<<endl; 
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
			cout<<"\nwidth �ϥ�"<<endl;
			int wv=4;
			char sen[10];
			
			cin.width(5);//�^��4�Ӧr 
			cout<<"��J�@�Ǧr�� EOF ���}"<<endl;
			while(cin>>sen) //cin�J�ťիh���U�@�� 
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
			cout<<"\n �ϥΪ̦۩w�q"<<endl;
			cout<<bell; //�o�X�G�n 
			cout<<"a"<<el;//el ���Nendl 
			cout<<"bb123"<<tab<<"c"<<cr<<"d"<<el;
			//�����ӬObb123	  c  �]��cr�^��̫e�q�h�ܦ� db123   c	
		}
			
};

class AlignmentandFill
{
	public:
		void print()
		{
			cout<<"\n���"<<endl;
			int x;
			cout<<"��J�@�ӼƦr"<<endl;
			while(cin>>x)
			{
				cout<<setw(10)<<x<<endl;
			
				cout.fill('x');	//�e���[��cout<< �|�h�@�ӭ� 
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
			cout<<"\n��y����flag�ϥ�"<<endl;
			ios::fmtflags f;  //�T�w�����A 

    		cout.unsetf(ios::dec); //�N10�i������ 
    		cout.setf(ios::oct | ios::showbase); //���}8�i��M��ܶi�� 

    		f = cout.flags(); //�]�w���A��f 

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
			cout<<"\n�@�Ǧ�y���~�����p"<<endl;
			int v;
			
			cout<<"�Nfailbit�]�w��1"<<endl;
			cin.clear(ios::failbit);
			cout<<"\ncin.rdstate()= "<<cin.rdstate()
				<<"\ncin.eof()    = "<<cin.eof()
				<<"\ncin.fail()   = "<<cin.fail()
				<<"\ncin.bad()    = "<<cin.bad()
				<<"\ncin.good()   = "<<cin.good()<<endl<<endl;
			cin.clear();
			
			cout<<"\n�^�_��l"<<endl;
			cout<<"\ncin.rdstate()= "<<cin.rdstate()
				<<"\ncin.eof()    = "<<cin.eof()
				<<"\ncin.fail()   = "<<cin.fail()
				<<"\ncin.bad()    = "<<cin.bad()
				<<"\ncin.good()   = "<<cin.good()<<endl<<endl;
				
			cout<<"�ЬG�N��J�@�r��"<<endl;	
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
			cout<<"\n���B�����D"<<endl;
			int b;
			cout<<"��J�@�Ǧr -1���}"<<endl;
			while(cin>>b)
			{
				if(b==-1)
				{
					cout<<"P eof= "<<cin.eof()<<endl;
					cin.ignore();
					break;
				}
				cout<<"b= "<<b<<endl;
				cout.put(b)<<endl;//�|��ASCII�X�ӿ�X�A���� 
			}
			
			cout<<"GB eof= "<<cin.eof()<<endl;
			int c;
			cout<<"��J�@�Ǧr EOF���}"<<endl;
			while((c=cin.get())!=EOF)//���C���u�|��@�ӭ� 
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
			cout<<"cin, cin.get ,cin.getline �ϥ�"<<endl;
			const int size=10;
			char O[size];
			char A[size];
			char B[size];
			
			cout<<"��J123 456 789 101112 131415 161718 192021 222324 252627"<<endl;
			cin.get(O,size);	//get�Mgetline���t���h �u�Ogetline���|�s���ɲŸ� 
			cout<<"O="<<O<<endl;

			cout<<endl;
			cin>>A;				//cin �I�� �ťիh�| ���}��y 
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
			cin.clear();	//getline �̫�|����y���@��null�ɭP���~ �ҥH�n�ϥ�clear�ӫ�_ 
			
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
