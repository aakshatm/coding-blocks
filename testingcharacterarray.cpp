#include <iostream>
using namespace std;
void readLine(char string[], char delimeter) {
	int i = 0;
	char ch = cin.get();
	while (ch != delimeter) {
		string[i] = ch;
		i++;
		ch = cin.get();
	}
	string[i] = '\0';
}

int main() {



	// string input
	char a[100];

	readLine(a, '\n');

	cout << a;

	return 0;
}
