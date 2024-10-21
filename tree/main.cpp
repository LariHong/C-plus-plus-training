#include <iostream>
#include <iomanip>
using namespace std;

template<typename nodetype> class Tree;
template<typename nodetype>
class Treenode
{
	friend class Tree<nodetype>;
	public:
		
		Treenode()
		:left(0),data(0),right(0)
		{
			
		}
		
		Treenode(nodetype v)
		:left(0),data(v),right(0)
		{
			
		}
		
	private:
		Treenode<nodetype> *left;
		nodetype data;
		Treenode<nodetype> *right;
};

template<typename nodetype>
class Tree 
{
	public:
		Tree()
		{
			root=0;
		}
		~Tree()
		{
			
		}
		void insertnode(nodetype v)
		{
			insertnodehelper(&root,v);
		}
		void preorder()
		{
			preorderhelper(root);
		}
		void inorder()
		{
			inorderhelper(root);
		}
		void postorder()
		{
			postorderhelper(root);
		}
		
	private:
		Treenode<nodetype> *root;
		
		void insertnodehelper(Treenode<nodetype>* *Root,nodetype hv)
		{
		
			if(*Root==0)
			{
				*Root=new Treenode<nodetype>(hv);
			}
			else
			{
				if(hv< (*Root)->data )
				{
					insertnodehelper(& ( (*Root) ->left) ,hv);
				}
				else if(hv==(*Root)->data)
				{
					cout<<"value: "<<hv<<"重複"<<endl; 
				}
				else
				{
					insertnodehelper(& ( (*Root) ->right),hv);
				}
			}
			
		}
		void preorderhelper(Treenode<nodetype>* Root)
		{
			if(Root!=0)
			{
				cout<<Root->data<<"   ";
				preorderhelper(Root->left);
				preorderhelper(Root->right);
			}
		}
		void inorderhelper(Treenode<nodetype>* Root)
		{
			if(Root!=0)
			{
				inorderhelper(Root->left);
				cout<<Root->data<<"   ";
				inorderhelper(Root->right);
			}
		}
		void postorderhelper(Treenode<nodetype>* Root)
		{
			if(Root!=0)
			{
				postorderhelper(Root->left);
				postorderhelper(Root->right);
				cout<<Root->data<<"   ";
			}
		}
			
};
int main(int argc, char** argv) 
{
	Tree<int> inttree;
	int intvalue;
	
	cout<<"輸入 10個數字(int)"<<endl;
	for(int i=0; i<10; i++)
	{
		cin>>intvalue;
		inttree.insertnode(intvalue);
	}
	
	cout<<"\npreorder\n";
	inttree.preorder();
	cout<<"\ninorder\n";
	inttree.inorder();
	cout<<"\npostorder\n";
	inttree.postorder();
	
	Tree<double> doubletree;
	double doublevalue;
	
	cout<<"\n輸入 10個數字(double)"<<endl;
	for(int i=0; i<10; i++)
	{
		cin>>doublevalue;
		doubletree.insertnode(doublevalue);
	}
	
	cout<<"\npreorder\n";
	doubletree.preorder();
	cout<<"\ninorder\n";
	doubletree.inorder();
	cout<<"\npostorder\n";
	doubletree.postorder();
	
	return 0;
}
