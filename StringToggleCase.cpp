#include <iostream>
using namespace std;

void ToggleCase(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		int assci = s[i];
		// upper to lower case
		if (assci < 95) {
			s[i] = assci + 32;
		}
		// lower to upper case
		else {
			s[i] = assci - 32;
		}
		i++;
	}
}

int main() {
	char s[1000];
	cin.getline(s, 1000);
	ToggleCase(s);
	cout << s;
	return 0;
}
