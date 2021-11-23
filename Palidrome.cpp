#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char s[], int i, int j) {

	bool isPalindrome = true;
	while (i < j) {
		if (s[i] != s[j]) {
			isPalindrome = false;
			break;
		}
		i++;
		j--;
	}
	return isPalindrome;
}

int countPalindromicSubstrings(char s[]) {
	int count = 0;
	int len = strlen(s);
	// finding all the substrings
	for (int i = 0; i < len ; i++) {
		for (int j = i; j < len; j++) {
			if (isPalindrome(s, i, j)) {
				count++;
			}
		}
	}
	return count;
}





int main() {
	char s[1000];
	cin.getline(s, 1000);

	cout << countPalindromicSubstrings(s);



	return 0;
}
