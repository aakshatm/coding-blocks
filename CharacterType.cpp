#include <iostream>
using namespace std;

void CharcterType(char ch) {
	if (ch >= 'a' && ch <= 'z') {
		cout << "L";
	}
	else if (ch >= 'A' && ch <= 'Z') {
		cout << "U";
	}
	else {
		cout << "I";
	}
}



int main() {
	char ch;
	cin >> ch;
	CharcterType(ch);
	return 0;
}
