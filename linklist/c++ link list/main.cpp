#include <iostream>
using namespace std;

class list;

class listnode
{
	friend class linklist;
	public:
		listnode()
		:data(0),next(0)
		{
		}
		
		listnode(int a)
		:data(a),next(0)
		{
		}

	private:
		int data;
		listnode *next;
};

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
			listnode *current=first;
			listnode *temp;
			
			while(current!=0)
			{
				temp=current;
				cout<<"delete: "<<current<<endl;
				current=current->next;
				delete temp;
			}
			
		  	cout<<"All nodes destoryed\n\n"; 
		}
		
		void InsertF(int a)
		{
			listnode *newnode= new listnode(a);
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
		void InsertB(int a)
		{
			listnode *newnode= new listnode(a);
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
					listnode *temp;
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
					listnode *current=first;   
				
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
		
		void Delete(int a)
		{
			listnode *previous=0;
			listnode *current=first;
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
			listnode *current=first;
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
		listnode *first;
		listnode *last;
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
void Test(linklist &LL)
{
	Choice();
	int choice;
	int value;
	
	do
	{
		cin>>choice;
		
		switch (choice)
		{
			case 1 :
				cout<<"輸入 數字: ";
				cin >>value;
				LL.InsertF(value);
				LL.print();
				break;
			case 2 :
				cout<<"輸入 數字: ";
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
				cout<<"輸入 刪除數字: ";
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
	linklist test1;
	Test(test1);
	
	return 0;
}
