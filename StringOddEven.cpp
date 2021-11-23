#include <iostream>
using namespace std;

void OddEvenSring(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		if (i % 2 == 0) {
			char newchar = s[i] + 1;
			s[i] = newchar;
		}
		else {
			char newchar = s[i] - 1;
			s[i] = newchar;
		}
		i++;
	}
}


int main() {
	char s[1000];
	cin.getline(s, 1000);
	OddEvenSring(s);
	cout << s;
	return 0;
}
