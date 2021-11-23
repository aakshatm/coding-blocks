#include <iostream>
#include <cstring>
using namespace std;

void RemoveDuplicate(char s[]) {
	int len = strlen(s);
	int i = 0;
	int j = 1;
	int cnt = 1;
	while (i <= len - 1) {


		if (s[i] == s[j]) {
			cnt++;
			// cout << cnt;
			j++;
			// cout << cnt;
		}
		else {
			cout << s[i];
			i = i + cnt;
			j = i + 1;
			cnt = 1;
		}

	}
}

int main() {
	char s[1000];
	cin.getline(s, 1000);
	RemoveDuplicate(s);
	return 0;
}
