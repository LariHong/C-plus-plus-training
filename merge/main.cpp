#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Mergesort
{
	public:
		Mergesort(int intsize)
		{
			size=(intsize<0 ? 10 : intsize);
			srand(time(0));
			
			for(int i=0; i<size; i++)
			{
				data.push_back(10+rand()%90);
			}
			cout<<"��l���A"<<endl;
			display(0,size-1); 
		}
		
		void callsort()
		{
			sort(0,size-1);
		}
		void calldisplay()
		{
			display(0,size-1);
		}
		
		
	private:
		int size;
		vector<int> data;
		void display(int low,int high)
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

		void sort(int low, int high)
		{
			if((high-low)>=1)
			{
				int mid1=(low+high)/2;
				int mid2=mid1+1;
				
				cout<<"����:  ";
				display( low,high );
				cout<<endl<<"       ";
				display( low,mid1 );
				cout<<endl<<"       ";
				display( mid2,high );
				cout<<endl<<endl;
				
				sort(low,mid1);
				sort(mid2,high);
				
				merge(low,mid1,mid2,high);
			}
		}
		
		void merge(int left, int middle1, int middle2, int right)
		{
			int leftindex=left;
			int rightindex=middle2;
			int combinedindex=left;
			
			vector<int> combined(size);
			
			cout<<"merge: ";
			display(left,middle1);
			cout<<endl<<"       ";
			display(middle2,right);
			cout<<endl;
			
			//�n�ŦX��b��������(leftindex <= middle1&& rightindex<=right) �~�|�i�Jwhile 
			while(leftindex <= middle1 && rightindex<=right)
			{
				//��b�� �֤p���Q��i�h 
				if(data[leftindex] <= data[rightindex])
				{
					combined[combinedindex++]=data[leftindex++];
				}
				else
				{
					combined[combinedindex++]=data[rightindex++];
				}
			}
			//left���Q��짹leftindex��middle2�h�k�b���Ѿl�������i�Jcombined
			if(leftindex==middle2)
			{
				while(rightindex<=right)
				{
					combined[combinedindex++]=data[rightindex++];
				}
			}
			//�u�ѤUleft���p(leftindex >/< middle2 ���|�u�ѤUleft) ��J combined
			else
			{
				while(leftindex<=middle1)
				{
					combined[combinedindex++]=data[leftindex++];
				}
			}
				
			for(int i=left; i<=right; i++)
			{
				data[i]=combined[i];
			}
			cout<<"       ";
			display(left,right);
			cout<<endl<<endl;
			
		}
};
int main(int argc, char** argv) 
{
	Mergesort test(3);
	
	test.callsort();
	
	cout<<"sort����"<<endl;
	test.calldisplay();
	return 0;
}
