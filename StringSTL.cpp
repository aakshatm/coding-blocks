#include <iostream>
#include <string>
using namespace std;

int main() {
	char s[1000] = "This is a character array";

	// copying the character array to a string

	string a(s);
	// or we can just equate it as well || string a = s

	cout << a << endl;
	// updating the string (we can update the string easily but can't update the charcter array using this method)
	a = "Updating the string";
	cout << a << endl;

	// string concatenation

	string x = "Hello ";
	string y = "World";
	x = x + y;

	cout << x;

	// multiplication doesn't work in string like python


	// finding something in the string;
	string word = "the";
	cout << "The index where " << word << " appear is " << a.find(word) << endl;


	// erasing or deleting something from string

	// syntax s.erase(<starting index>, <no of characters to delete>)

	// lets say we delete "the" in string a

	int indx = a.find(word);
	int len = word.length();
	a.erase(indx, len + 1);
	cout << a << endl;
	return 0;
}
