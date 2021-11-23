#include <iostream>
#include <string>
#include <algorithm> // to use the sort function
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b; // sorting dictionary wise if length is same in asc order
	}
	return a.length() > b.length(); // sorting it according to the length in desc order
}

int main() {
	// sorting the array of string in 1. lexiographical order (according to dictionary)
	// 2. sorting according to the length of string in desc order if length is same then in lexiographical order

	// taking input of the number of string elements
	int n;
	cin >> n;

	// creating the string array
	string s[100];

	// ignoring the '\n' after taking the input of n
	cin.get();

	// taking input of the n strings and storing it in string array

	for (int i = 0; i < n; i++) {
		getline(cin, s[i]);
	}


	// sorting the string in the 1.  lexiographical order using inbuild sort function
	// sort(s, s + n);

	// 2. second sorting as mentioned above
	sort (s, s + n, compare);


	// printing the sorted string array
	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}
	return 0;
}
