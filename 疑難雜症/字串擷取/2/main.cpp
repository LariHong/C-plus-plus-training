#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) 
{
	char word[4];
	cout<<"�H�U�O �r��(�S��setw)"<<endl;
	cout<<"�r�ꪺ�}�C�]�w��4 ��J4�r���H�W�ΥH�U"<<endl;
	cin >>word;
	cout<<   "word=  "<<word<<endl;
	cout<<"word[0]=  "<<word[0]<<endl;
	cout<<"word[1]=  "<<word[1]<<endl;
	cout<<"word[2]=  "<<word[2]<<endl;
	cout<<"word[3]=  "<<word[3]<<endl;
	
	cout<<"word[4]=  "<<word[4]<<endl;
	cout<<"word[5]=  "<<word[5]<<endl;
	
	cout<<"��J���r�|�Q�@����word�å[�}�}�C"<<endl;
	
	char word2[4];
	cout<<"\n\n�H�U�O �r��2(����setw)"<<endl;
	cout<<"�r�ꪺ�}�C�]�w��4 ��J4�r���H�W�ΥH�U"<<endl;
	cin >>setw(5)>>word2;
	cout<<   "word2=  "<<word2<<endl;
	cout<<"word2[0]=  "<<word2[0]<<endl;
	cout<<"word2[1]=  "<<word2[1]<<endl;
	cout<<"word2[2]=  "<<word2[2]<<endl;
	cout<<"word2[3]=  "<<word2[3]<<endl;
	
	cout<<"word2[4]=  "<<word2[4]<<endl;
	cout<<"word2[5]=  "<<word2[5]<<endl;
	
	cout<<"��J���r�p�G�W�L���w���r�ƫh�|���~��O��"<<endl;
	system("pause");
}
