#include <iostream>
using namespace std;

int main() {
	char a[] = "The quick brown fox jumped over a lazy dog";
	int freq[26] = {0};
	for (int i = 0; a[i] != '\0'; i++) {
		char ch = a[i];
		int index = ch - 'a';
		freq[index]++;
	}

	for (int i = 0; i < 26; i++) {
		if (freq[i] != 0) {
			char x = 'a' + i;
			cout << "Charcter " << x << " occurs " << freq[i] << " times." << endl;
		}
	}
	return 0;
}
