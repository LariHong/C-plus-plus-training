#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int map[7][7]={0};
	int x,y;								 //�Ǫ��y�� 
	int monc=1;
	int dir;								 //�i�̤�V
	int ux=1,uy=1;							 //�i�̮y�� 
	
	
	for(int i=0; i<7; i++)                   //�a�� 
	{
		for(int j=0; j<7; j++)
		{
			if(i==0 || j==0 || i==6 ||j==6)
			{	
				map[i][j]=1;
			}
			else
			{
				map[i][j]=0;
			}
			
		}	
	}
	map[ux][uy]=5;
	
	do										//�Ǫ� 
	{
		x=1+rand()%4;
		y=1+rand()%4;
		
		if(map[x][y]!=3)
		{
			map[x][y]=3;
			monc+=1;
		}
			
	}while(monc<3);
	
	
	while(dir>-1)
	{
		for(int i=0; i<7; i++)                //��ܦa��   
		{
			for(int j=0; j<7; j++)
			{
				cout<<map[i][j]<<" ";
			}
			cout<<endl;	
		}
		
		cout<<"�W:8 \n�U:2 \n��:4 \n�k:6 \n";
		cin>>dir;
		cout<<"dir= "<<dir<<endl;
		switch (dir)
		{
		
			case 8:
				if(map[ux-1][uy]==1)
				{
					cout<<"�I��"<<endl; 
				}
				else if(map[ux-1][uy]==0)
				{
					map[ux-1][uy]==5;
					map[ux][uy]==0;
					ux=ux-1;
					
				}
				else if(map[ux-1][uy]==3)
				{
					cout<<"�����Ǫ�"<<endl;
					map[ux-1][uy]==5;
					map[ux][uy]==0; 
					ux=ux-1;
				}
				break;
				
			case 2:
				if(map[ux+1][uy]==1)
				{
					cout<<"�I��"<<endl; 
				}
				else if(map[ux+1][uy]==0)
				{
					map[ux+1][uy]=5;
					map[ux][uy]=0;
					ux=ux+1;

				}
				else if(map[ux+1][uy]==3)
				{
					cout<<"�����Ǫ�"<<endl;
					map[ux+1][uy]=5; 
					map[ux][uy]=0;
					ux=ux+1; 
					
				}
				break;
				
			case 4:
				if(map[ux][uy-1]==1)
				{
					cout<<"�I��"<<endl; 
				}
				else if(map[ux][uy-1]==0)
				{
					map[ux][uy-1]=5;
					map[ux][uy]=0;
					uy=uy-1;
					
				}
				else if(map[ux][uy-1]==3)
				{
					cout<<"�����Ǫ�"<<endl;
					map[ux][uy-1]=5; 
					map[ux][uy]=0; 
					uy=uy-1;
				}
				break;
				
			case 6:
				if(map[ux][uy+1]==1)
				{
					cout<<"�I��"<<endl; 
				}
				else if(map[ux][uy+1]==0)
				{
					map[ux][uy+1]=5;
					map[ux][uy]=0;
					uy=uy+1;
				}
				else if(map[ux][uy+1]==3)
				{
					cout<<"�����Ǫ�"<<endl;
					map[ux][uy+1]=5;
					map[ux][uy]=0; 
					uy=uy+1;
				}
				break;
		}
		
	}
	
	
	
}
