#include <iostream>

using namespace std;

enum Rank (NULL, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE);
enum Suit (NULL, SPADE, HEART, DIAMOND, CLUB);

class Card
{
	private:
		int Suit, Rank;

	public:
		Card(int Suit, int Rank) {
			this->Suit = Suit;
			this->Rank = Rank;
		}

		//Getters

		int GetRank() {
			return this->Rank;
		}

		int GetSuit() {
			return this->Suit;
		}

		//Setters

		int SetRank(int Rank) {
			this->Rank = Rank;
			return this->Rank;
		}

		int SetSuit(int Suit) {
			this->Suit = Suit;
			return this->Suit;
		}

		~Card();
		
};

int main(){
    
    return 0;
}