#include <iostream>
#include <string>
using namespace std;

template<typename nodetype>class linklist;

template<typename nodetype>
class listnode
{
	friend class linklist<nodetype>;
	public:
		listnode()
		:data(0),next(0)
		{
		}
		
		listnode(nodetype &a)
		:data(a),next(0)
		{
		}

	private:
		nodetype data;
		listnode<nodetype> *next;
};

template<typename nodetype>
class linklist
{
	public:
		linklist()
		:first(0),last(0)
		{
			
		}
		~linklist()
		{
			cout<<"Destroying nodes ...\n";
			listnode<nodetype> *current=first;
			listnode<nodetype> *temp;
			
			while(current!=0)
			{
				temp=current;
				cout<<"delete: "<<current<<endl;
				current=current->next;
				delete temp;
			}
			
		  	cout<<"All nodes destoryed\n\n"; 
		}
		
		void InsertF(nodetype &a)
		{
			listnode<nodetype> *newnode= new listnode<nodetype>(a);
			if(Isempty())
			{
				cout<<"List 空 增加一個到開頭"<<endl;
				first=newnode;
				last=newnode;
				
				last->next=0;
			}
			else
			{
				newnode->next=first;
				first=newnode;
			}
		}
		void InsertB(nodetype &a)
		{
			listnode<nodetype> *newnode= new listnode<nodetype>(a);
			if(Isempty())
			{
				cout<<"List 空 增加一個到尾巴"<<endl;
				first=newnode;
				last=newnode;
				
				last->next=0;
			}
			else
			{
				last->next=newnode;
				last=newnode;
				
				last->next=0;
			}
			
		}
		void DeleteF()
		{
			if(Isempty())
			{
				cout<<"List 空 無法刪"<<endl;
			}
			else
			{
				if(first==last)
				{
					delete first;
					first=last=0;
					if(Isempty())
					{
						cout<<"After DeleteF 空"<<endl;
					}
				}
				else
				{
					listnode<nodetype> *temp;
					temp=first;
					first=first->next;
					delete temp;
				}
			}
		}
		void DeleteB()
		{
			if(Isempty())
			{
				cout<<"List 空 無法刪"<<endl;
			}
			else
			{
				if(first==last)
				{
					delete last;
					first=last=0;
					if(Isempty())
					{
						cout<<"After DeleteB 空"<<endl;
					}
				}
				else
				{
					listnode<nodetype> *current=first;   
				
					while(current->next!=last)
					{
						current=current->next;
					}
					last=current;
					current=current->next;
					delete current;
					
				
					last->next=0;
				}
			}
			
		}
		
		void Delete(nodetype& a)
		{
			listnode<nodetype> *previous=0;
			listnode<nodetype> *current=first;
			if(Isempty())
			{
				cout<<"List 空 無法刪除"<<endl;
			}
			else
			{
				while(current!=0 && current->data!=a)
				{
					previous=current;
					current=current->next;
				}
				
				if(current==0)
				{
					cout<<"List 找不到 無法刪除"<<endl;
				}
				else if(first->data==a)
				{
					first=first->next;
					cout<<"delete: "<<current->data<<endl;
					delete current;
					current=0;
				}
				else
				{
					previous->next=current->next;
					cout<<"delete: "<<current->data<<endl;
					delete current;
					current=0;
				}
			}
		}
		bool Isempty()
		{
			return first==0;
		}
		void print()
		{
			listnode<nodetype> *current=first;
			if(Isempty())
			{
				cout<<"print 空"<<endl; 
			}
			else
			{
				cout<<"目前 data= ";
				while(current!=0)
				{
					cout<< current->data<<"   ";
					current=current->next;
				}
				cout<<endl<<endl;
			}
		}
	private:
		listnode<nodetype> *first;
		listnode<nodetype> *last;
};

void Choice()
{
	cout<<"以下選一\n"
		<<"1 增加一個node到開頭\n"
		<<"2 增加一個node到尾巴\n"
		<<"3 刪除一個node從開頭\n"
		<<"4 刪除一個node從尾巴\n"
		<<"5 刪除任意一個node\n"
		<<"6 END\n";
}

template<typename T>
void Test(linklist<T> &LL,const string &s)
{
	Choice();
	int choice;
	T value;
	
	do
	{
		cin>>choice;
		
		switch (choice)
		{
			case 1 :
				cout<<"輸入 "<<s<<": ";
				cin >>value;
				LL.InsertF(value);
				LL.print();
				break;
			case 2 :
				cout<<"輸入 "<<s<<": ";
				cin >>value;
				LL.InsertB(value);
				LL.print();
				break;
			case 3 :
				LL.DeleteF();
				LL.print();
				break;
			case 4 :
				LL.DeleteB();
				LL.print();
				break;
			case 5 :
				cout<<"輸入 刪除"<<s<<"數字: ";
				cin >>value;
				LL.Delete(value);
				LL.print();
				break;
		}
	}
	while(choice<6);
} 
int main(int argc, char** argv) 
{
	linklist<int> test1;
	Test(test1,"integer");
	
	linklist<double> test2;
	Test(test2,"double");
	
	return 0;
}
