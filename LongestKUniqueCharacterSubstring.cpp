#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char a[] = "aceddddddbb";
	int k = 3; // no of unique character string needed
	int len = -1;
	int freq[26] = {0}; // to keep count of the number of characters
	int i = 0, j = 0;
	int cnt = 0;
	while (a[j] != '\0') {
		int index = a[j] - 'a';
		freq[index]++;
		if (freq[index] == 1) {
			cnt++;
		}
		if (cnt == k) {
			int l = j - i + 1;
			if (l > len) {
				len = l;
			}
			j++;
		}
		else if (cnt > k) {
			freq[a[i] - 'a']--;
			if (freq[a[i] - 'a'] == 0) {
				cnt--;
			}
			i++;
		}
		else {
			j++;
		}



	}

	cout << len;
	return 0;
}
