#include <iostream>
using namespace std;

bool isUpper(char ch) {
	if (ch >= 'A' && ch <= 'Z') {
		return true;
	}
	return false;
}

int main() {
	char str[100];
	cin.getline(str, 100);
	int i = 0;
	while (str[i] != '\0') {
		if (i == 0) {
			cout << str[i];
		}

		else if (isUpper(str[i])) {
			cout << endl;
			cout << str[i];
		}
		else {
			cout << str[i];
		}

		i++;
	}


	return 0;
}
