#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

struct Card
{
	string face;
	string suit;
};

class deckofcard
{
	public:
		static const int numberofcards=52;
		static const int faces=13;
		static const int suits=4;
		deckofcard()
		:deck(numberofcards)
		{
			static string suit[suits]={"黑桃","愛心","方塊","梅花"};
			static string face[faces]={"one","two","three","four","five","six",
		    "seven","eight","nine","ten","J","Q","K"};
			
			for(int i=0; i<numberofcards; i++)
			{
				deck[i].face=face[i%faces];
				deck[i].suit=suit[i/faces];
			}
			
			srand(time(0));
		}
		
		void shuffle()
		{
			for(int i=0; i<numberofcards; i++)
			{
				int j=rand()%numberofcards;
				Card temp=deck[i];
				deck[i]=deck[j];
				deck[j]=temp;
			}
		}
		
		void deal()
		{
			for(int i=0; i<numberofcards; i++)
			{
				cout<<deck[i].face<<" of "<<deck[i].suit<<((i+1)%2 ? "\t" : "\n");
			}
		}
	private:
		vector<Card> deck;
};

int main(int argc, char** argv) 
{
	deckofcard test;
	test.shuffle();
	test.deal();
	return 0;
}
