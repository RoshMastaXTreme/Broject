#include "Deck.cpp"

using namespace std;

class Player{
	
	private:
		//Pointer to a card array to represent the hand of cards max five
		
		Card* h1;
		
		//Another pointer to array of cards, again max of 5, for splitting.
		
		//boolean to represent the player has split
		
		//Total integer score the user has
		
		//Player name
		
		string name;
		
	public:
		
		//initialize player
		
		void init(string s){
			name = s;
			h1 = new Card[5];
		}
		
		//Add a card to the specified hand. Check for the max of 5
		//also increment the score by the value of the card.
		//assume Aces are a value of 1,
		//Any card with a value > 10 is just 10
		//A check for that will be made in the game class
		
		void addCard(Card a[], Card c){
			
		}
		
		/*
		splitting is only an option when the player is dealt
		a pair of card, is just takes one of the cards from the
		first array and puts it into the other one.
		*/
		
		void split(){
			
		}
		
		//boolean returning if the player has split the cards
		//this way we know to check both arrays for cards
		
		bool hasSplit(){
			
		}
		
		
		//The functions return the pointers to the arrays.
		
		Card* getHand1(){
			
		}
		
		Card* getHand2(){
			
		}
		
		
		
};




