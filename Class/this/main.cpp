#include <iostream>
using namespace std;

class th
{
	public:
		
		th(int=0);	//��l�Ȥ�k 
		void print() const		// const�m��禡�᭱�B�bclass�� ��ܤ��i�H���private���ܼƪ��� 
		{
			cout<<"x= "<<x<<endl;
			cout<<"this->x= "<<this->x<<endl;	//this ���  �ثe�o��class����m�A�u��bclass���ϥ� 
			cout<<"(*this).x= "<<(*this).x<<endl;
		}
		
		th &setY(int v)
		{
			y=v;
			return *this;
		}
		void printY()
		{
			cout<<"\n�ܼƦW��.setY(�Ʀr).printY()= "<<y<<endl;
		}
		
	private:
		int x;
		int y;	
};

th::th(int a)	//�O��  ���Ȫ���k 
:x(a)
{
	
}

int main(int argc, char** argv) 
{
	cout<<"���Dthis���Ϊk:"<<endl;
	
	
	cout<<"\n��l this����X:"<<endl; 
	th test;
	test.print();
	
	cout<<"\n�ȵ�100 this����X:"<<endl;
	th test2(100);
	test2.print();
	
	cout<<"\n�ϥΦ^��this�禡 this����X:"<<endl;
	th test3;
	test3.setY(60).printY();
	
	
	cout<<"\n//���X����L�Ը�"<<endl;
	system("pause");
}
