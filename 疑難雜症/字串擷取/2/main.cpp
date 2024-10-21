#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) 
{
	char word[4];
	cout<<"以下是 字串(沒打setw)"<<endl;
	cout<<"字串的陣列設定為4 輸入4字元以上或以下"<<endl;
	cin >>word;
	cout<<   "word=  "<<word<<endl;
	cout<<"word[0]=  "<<word[0]<<endl;
	cout<<"word[1]=  "<<word[1]<<endl;
	cout<<"word[2]=  "<<word[2]<<endl;
	cout<<"word[3]=  "<<word[3]<<endl;
	
	cout<<"word[4]=  "<<word[4]<<endl;
	cout<<"word[5]=  "<<word[5]<<endl;
	
	cout<<"輸入的字會被一直給word並加開陣列"<<endl;
	
	char word2[4];
	cout<<"\n\n以下是 字串2(有打setw)"<<endl;
	cout<<"字串的陣列設定為4 輸入4字元以上或以下"<<endl;
	cin >>setw(5)>>word2;
	cout<<   "word2=  "<<word2<<endl;
	cout<<"word2[0]=  "<<word2[0]<<endl;
	cout<<"word2[1]=  "<<word2[1]<<endl;
	cout<<"word2[2]=  "<<word2[2]<<endl;
	cout<<"word2[3]=  "<<word2[3]<<endl;
	
	cout<<"word2[4]=  "<<word2[4]<<endl;
	cout<<"word2[5]=  "<<word2[5]<<endl;
	
	cout<<"輸入的字如果超過限定的字數則會不繼續記錄"<<endl;
	system("pause");
}
