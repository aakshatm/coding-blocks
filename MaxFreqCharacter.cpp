#include <iostream>
using namespace std;

void maxCharacterFreq(char s[]) {
	int freq[26] = {0};
	int i = 0;
	while (s[i] != '\0') {
		int index = s[i] - 'a';
		freq[index]++;
		i++;
	}

	int freqMax = freq[0];
	int maxFreqindex = 0;
	for (int i = 0; i < 26; i++) {

		if (freq[i] > freqMax) {
			freqMax = freq[i];
			maxFreqindex = i;
		}
	}

	// printing the maximum frequent character
	char mostFrqCharcter = 'a' + maxFreqindex;
	cout << mostFrqCharcter;
}

int main() {
	char s[1000];
	cin.getline(s, 1000);
	maxCharacterFreq(s);
	return 0;
}
