#include <iostream>
#include <cstring>
using namespace std;

void StringCompression(char s[]) {
	int len = strlen(s);
	int count[len] = {0};

	int i = 0, j = 1;
	int index = 0;
	int cnt = 1;
	// storing the frequencies of the characters
	while (i <= len - 1) {
		if (s[i] == s[j]) {
			cnt++;
			j++;
		}
		else {
			count[index++] = cnt;
			i = i + cnt;
			j = i + 1;
			cnt = 1;
		}
	}

	// printing the compressed string
	index = 0;
	i = 0;
	while (i <= len - 1) {
		cout << s[i] << count[index];
		i = i + count[index];
		index++;
	}
}

int main() {
	char s[1000];
	cin.getline(s, 1000);
	cout << s;
	StringCompression(s);
	return 0;
}
