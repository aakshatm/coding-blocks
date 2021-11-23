#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char s[1000];
	cin.getline(s, 1000);
	int i = 0;
	int len = strlen(s);
	while (i < len - 1) {
		int j = i + 1;
		int assciDiff = s[j] - s[i];
		if (i == 0) {
			cout << s[i] << assciDiff << s[j];
		}
		else {
			cout << assciDiff << s[j];
		}
		i += 1;

	}
	return 0;
}
