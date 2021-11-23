#include <iostream>
#include <cstring>
using namespace std;

void RemoveDuplicate(char str[]) {
	int i = 0, j = 1;
	int len =  strlen(str);
	while (j <= len) {
		if (str[i] != str[j]) {
			i++;
			str[i] = str[j];
		}
		j++;
	}
}

int main() {
	char str[1000];
	cin.getline(str, 1000);
	cout << str << endl;
	RemoveDuplicate(str);
	cout << str << endl;

	return 0;
}
