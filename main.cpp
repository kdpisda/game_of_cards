#include <bits/stdc++.h>

using namespace std;

enum Rank (TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE, NOTHING);
enum Suit (SPADE, HEART, DIAMOND, CLUB, NOTHING);

class Card{
	private:
		int Suit, Rank;

	public:
		Card(int suit = 4, int rank = Rank4) {
			this->Suit = suit;
			this->Rank = rank;
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
        Card playingCard[52];
    public:
        void initialize();

        void shuffleDeck();

        Card pickACard();
}

void DeckOfCards :: initialize(){
    int i, j, count = 0;
    for(i = 0, i < 4; i++){
        for(j = 0; j < 13; j++){
            this->playingCard[count].SetRank(Rank[j]);
            this->playingCard[count].SetSuit(Suit[i]);
            count++;
        }
    }
}

void DeckOfCards :: shuffleDeck(){
    random_shuffle(begin(this->playingCard), end(this->playingCard));
}

Card DeckOfCards :: pickACard(){
    Card tempCard;
    randomize();
    int i = random(52);
    tempCard = this->playingCard[i];
    remove(begin(this->playingCard), end(this->playingCard), i);
    this->shuffle();
    return tempCard;
}

int main(){
    DeckOfCards Deck;
    Card currentCard;
    Deck.initialize();
    currentCard = DeckOfCards.pickACard();
    for(int i = 0; i < 4; i++){
        cout << "\n" << currentCard.GetRank() << "\t" << currentCard.GetSuit() << "\n";
    }
    return 0;
}