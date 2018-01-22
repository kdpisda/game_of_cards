#include <iostream>

using namespace std;

enum Rank (TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE);
enum Suit (SPADE, HEART, DIAMOND, CLUB);

class Card{
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

class DeckOfCards{
    private:
        Card playing_cards[52];
    public:
        void initialize();
}

void DeckOfCards:: initialize(){
    // for()
}

int main(){
    
    return 0;
}