#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

struct Card
{
	unsigned face : 13;
	unsigned suit : 4;
	unsigned color : 2;
};

class deckofcard
{
	public:
		static const int numberofcards=52;
		static const int faces=13;
		static const int suits=4;
		static const int colors=2;
		
		deckofcard()
		:deck(numberofcards)
		{

			for(int i=0; i<numberofcards; i++)
			{
				deck[i].face=i%faces;
				deck[i].suit=i/faces;
				deck[i].color= i/(faces*colors);
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
				cout<<deck[i].face<<" of "<<deck[i].suit
				<<" of "<<deck[i].color<<((i+1)%2 ? "\t" : "\n");
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
