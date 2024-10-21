#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm> //����sort�禡 
using namespace std;

class Binarysearch
{
	public:
		Binarysearch(int Int) //�H�����ͼƦr
		{
			size=(Int>0 ? Int : 10);
			srand(time(0));
			for(int i=0; i<size; i++)
			{
				data.push_back(10+rand()%90);
			}
			cout<<"�_�l���A"<<endl;
			display(0,size-1); 
			std::sort(data.begin(),data.end());
			cout<<"�ƧǤ���"<<endl;
			display(0,size-1);  
		}
		
		int binarysearch(int search)
		{
			int low=0;
			int high=size-1;
			int mid=(low+high+1)/2;
			int location=-1;
			//cout<<"mid= "<<mid<<endl;
			do
			{
				display(low,high);
				for(int i=0; i<mid; i++)
				{
					cout<<"   ";
				}
				cout<<" * "<<endl;
				
				if(search==data[mid])
				{
					location=mid;
				}
				else if(search<data[mid])
				{
					high=mid-1;
				}
				else
				{
					low=mid+1;
				}
				mid=(low+high+1)/2;
				//cout<<"mid= "<<mid<<endl;
			}while((low<=high)&&(location==-1));
			
			return location;
		}

	private:
		int size;
		vector<int> data;
		void display(int low, int high)
		{
			for(int i=0; i<low; i++)
			{
				cout<<"   ";
			}
			for(int i=low; i<=high; i++)
			{
				cout<<data[i]<<" ";
			}
			cout<<endl;
		}
			
};
int main(int argc, char** argv) 
{
	Binarysearch test1(15);
	
	int serachint;
	int position;
	
	cout<<"��J�j�M�ȩ�-1����";
	cin>> serachint;
	cout<<endl;
	
	while(serachint!=-1)
	{
		position=test1.binarysearch(serachint);
		
		if(position==-1)
		{
			cout<<"�Ʀr: "<< serachint<<"�S���"<<endl; 
		}
		else
		{
			cout<<"�Ʀr: "<< serachint<<"�Q����:"<< position<<endl; 
		}
		
		cout<<"��J�j�M�ȩ�-1����";
		cin>> serachint;
		cout<<endl;
	}
	return 0;
}
