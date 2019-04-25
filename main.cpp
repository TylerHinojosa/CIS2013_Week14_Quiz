#include <iostream>
#include <string>
#include "card.cpp"
#include "person.cpp"

using namespace std;

int main() {
	
	string player1;
	char hOrS = 'h';
	string suites[] = { "Diamonds", "Clubs", "Spades", "Hearts" };
	char vals[] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'T', 'J', 'Q', 'K'};
	Card deck [52];
	Person dealer;
	Person player;
	
	// Create users
	dealer.set_name("Dealer");	
	cout << "Enter the name of your players: ";
	cin >> player1;
	player.set_name(player1);
	
	// Populate deck of cards
	int cnt = 0;
	for(int i=0; i<4; i++){
		string s = suites[i];
		for(int j=0;i<13 j++){
			char v = vals[j];
			deck[cnt].set_weight(j);
			deck[cnt].set_suite(s);
			cnt++;
		}
	}
	
	cout << "Dealer has a A of Diamond , and a 5 of Club " << endl;
	cout << player1 << "has a A of Spades, and a K of Diamonds" << endl;
	cout << "(H)it or (S)tay: ";
	cin >> hOrS;
	player.set_hitting(hOrS);
	
	cout << "Printing our deck of cards: " << endl;
	for(int i=0; i<52;i++){
		cout <, deck[i].get_value() << " of " << deck[i].get_suite() << endl;
	}
	
	return 0;
}