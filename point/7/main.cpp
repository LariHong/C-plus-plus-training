#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
	char const *suit[4]={"ant","bee","cat","dog"};
	
	cout<<"suit[0](�o�̬O��Xchar const *suit[4]���Ĥ@�Ӥ���)          = "<<    suit[0]<<endl;
	cout<<"\n&suit[0](�ثeant���s���m)                                 = "<<   &suit[0]<<endl;
	cout<<"\n*&suit[0](���P��suit[0])                                    = "<<   *&suit[0]<<endl;
	
	cout<<"\n&suit[0][0](�ثeant���s���m �B �q�Ĥ@�Ӧr��}�l��X)      = "<<&suit[0][0]<<endl;
	cout<<"\n&suit[0][1](�ثeant���s���m �B �q�ĤG�Ӧr��}�l��X)      = "<<&suit[0][1]<<endl;
	cout<<"\n&suit[0][2](�ثeant���s���m �B �q�ĤT�Ӧr��}�l��X)      = "<<&suit[0][2]<<endl;
	
	cout<<"\nsuit[0][0](��Xant�Ĥ@�Ӥ���)                               = "<<suit[0][0]<<endl;
	cout<<"\nsuit[0][1](��Xant�ĤG�Ӥ���)                               = "<<suit[0][1]<<endl;
	cout<<"\nsuit[0][2](��Xant�ĤT�Ӥ���)                               = "<<suit[0][2]<<endl;
	
	cout<<"\n*suit[0](��X�}�C�Ĥ@�Ӫ��Ĥ@�Ӥ���)                        = "<<*suit[0]<<endl;
	cout<<"\n*suit[1](��X�}�C�ĤG�Ӫ��Ĥ@�Ӥ���)                        = "<<*suit[1]<<endl;
	cout<<"\n*suit[2](��X�}�C�ĤT�Ӫ��Ĥ@�Ӥ���)                        = "<<*suit[2]<<endl;
	cout<<"\n*suit[3](��X�}�C�ĥ|�Ӫ��Ĥ@�Ӥ���)                        = "<<*suit[3]<<endl;
	
	cout<<"suit[1]"<<suit[1]<<endl;
	cout<<"suit[2]"<<suit[2]<<endl;
	cout<<"suit[3]"<<suit[3]<<endl;
	
	system("pause");
}
