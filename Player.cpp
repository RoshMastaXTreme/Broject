#include "card.cpp"
using namespace std;
class Player{
    private:
    //Pointer to a card array to represent the hand of cards max five
    Card* h1;
    Card* h2;
    int counter;
    int value;
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
        h2 = new Card[5];
        counter = 0;
        value = 0;
    }
    //Add a card to the specified hand. Check for the max of 5
    //also increment the score by the value of the card.
    //assume Aces are a value of 1,
    //Any card with a value > 10 is just 10
    //A check for that will be made in the game class
    void addCard(Card *a, Card c){
        if(counter == 5){
            cout << "The hand is full";
        }
        else{
            a[counter] = c;
            counter++;
            value = value + c.getValue();
        }
    }
    /*
    splitting is only an option when the player is dealt
    a pair of card, is just takes one of the cards from the
    first array and puts it into the other one.
    */
    void split(){
        h2[0] = h1[1];
        h1[1] = h2[1];
    }

    //The functions return the pointers to the arrays.
    Card* getHand1(){
        return h1;
    }
    Card* getHand2(){
        return h2;
    }
};

