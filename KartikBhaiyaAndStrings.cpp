#include <iostream>
#include <string>
using namespace std;

int countMaxWindowsSize(string s, int k, char ch) {
	int i = 0, j = 0;
	int c = 0;

	int ans = 0;
	for (j = 0; j < s.length() - 1; j++) {
		if (s[j] != ch) {
			c++;
		}
		if (c == k) {
			break;
		}
	}

	while (i < j) {
		while (j < s.length() - 1  && s[j + 1] == ch) {
			j++;
		}

		int curlength = j - i + 1;
		ans = max(ans, curlength);

		i++;

		if (j < s.length() - 1 && s[i - 1] != ch) {
			j++;
		}
	}

	return ans;


}

int main() {
	// driver code
	int k;
	cin >> k;

	string s;
	cin >> s;

	int maxforA = countMaxWindowsSize(s, k, 'a');
	int maxforB = countMaxWindowsSize(s, k, 'b');

	cout << max(maxforA, maxforB);

	return 0;
}
