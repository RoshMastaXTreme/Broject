#include <iostream>
#include "test.cpp"

using namespace std;

class Card{
	
	private:
		
		//Global private variables
		
		char suit;
		int value;
		
		
	public:
		
		//Functions for initiating and retrieving values
		
		void init(char s, int v){
			suit = s;
			value = v;
		}
		
		char getSuit(){
			return suit;
		}
		
		int getValue(){
			return value;
		}
		
		
		
};






