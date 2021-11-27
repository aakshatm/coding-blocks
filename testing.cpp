#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "Aakshat";
	cout << s;
	cout << endl;

	for ( int i = 0; i < s.size() ; i++) {
		cout << s[i] << " ";
	}
	return 0;
}
