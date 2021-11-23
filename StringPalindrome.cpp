#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char string[]) {
	int i = 0, j = strlen(string) - 1;
	while (i < j) {
		if (string[i] != string[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main() {
	char string[100];
	cin >> string;

	if (isPalindrome(string)) {
		cout << "Palindrome";
	}
	else {
		cout << "Not Palindrome";
	}


	return 0;
}
