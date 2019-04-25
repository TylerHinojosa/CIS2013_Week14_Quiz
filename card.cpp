#ifndef CARD_CPP
#define CARD_CPP

#include <string>

using namespace std;

class Card{
	
	private:
	
		string suite;
		char value;
		int weight;
		bool is_used;
		void set_weight(char w){
			switch(w){
				case 'A':
					weight = 1;
					break;
				case '2':
					weight = 2;
					break;
				case '3':
					weight = 3;
					break;
				case '4':
					weight = 4;
					break;
				case '5':
					weight = 5;
					break;
				case '6':
					weight = 6;
					break;
				case 'A':
					weight = 1;
					break;
				case '7':
					weight = 7;
					break;
				case '8':
					weight = 8;
					break;
				case '9':
					weight = 9;
					break;
				case 'J':
					weight = 10;
					break;
				case 'Q':
					weight = 10;
					break;
				case 'K':
					weight = 10;
					break;
				default:
					weight = (int)w;
			}
		}	
	public:
	
		// Setters
		void set_suite(string s){suite = s; }
		void set_value(char v){
			value = v;
			set_weight(v);
		}
		void set_used(bool u){is_used = u;}
		
		
		// Getters
		string get_suite(){ return suite; }
		char get_value(){ return value; }
		bool get_used(){ return is_used; }
		int get_weight(){ return weight; }
		
};
#endif