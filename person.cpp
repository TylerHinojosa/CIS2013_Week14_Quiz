#ifndef PERSON_CPP
#define PERSON_CPP

#include <string>
#include "card.cpp"

using namespace std;

class Person{
	
	private:
	
		string name;
		bool is_hitting;
		Card hand[9];
	
	public:
	
		// Constructor
		Person(){
			set_name("unknown");
			set_hitting(true);
		}
		
		// Setters
		void set_name(string n){ name = n; }
		void set_hitting(bool h){is_hitting = h;}
		
		// Getters
		string get_name(){return name;}
};
#endif