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
					cout<<"data:= "<<first->data<<endl;
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
					cout<<"data:= "<<temp->data<<endl;
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
					cout<<"data:= "<<last->data<<endl;
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
					cout<<"data:= "<<current->data<<endl;
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
				cout<<"print list空"<<endl<<endl; 
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

template<typename stacktype>
class Stack:private linklist<stacktype>
{
	public:
		void push(stacktype &v)
		{
			linklist<stacktype>::InsertB(v);
		}
		void pop()
		{
			linklist<stacktype>::DeleteB();
		}
		bool Isstackempty()
		{
			return linklist<stacktype>::Isempty();
		}
		void stackprint()
		{
			linklist<stacktype>::print();
		}
			
};

int main(int argc, char** argv) 
{
	Stack <int> instack;
	cout<<"processing an integer stack"<<endl;
	
	for(int i=0; i<3;i++)
	{
		instack.push(i);
		instack.stackprint();
	}
	
	int popinteger;
	
	while(!instack.Isstackempty())
	{
		cout<<"pop ";
		instack.pop();
		instack.stackprint();
	}
	
	Stack <double> doublestack;
	double value=1.1;
	cout<<"processing an double stack"<<endl;
	
	for(int j=0; j<3;j++)
	{
		doublestack.push(value);
		doublestack.stackprint();
		value+=1.1;
	}
	
	while(!doublestack.Isstackempty())
	{
		cout<<"pop ";
		doublestack.pop();
		doublestack.stackprint();
	}
	return 0;
}
