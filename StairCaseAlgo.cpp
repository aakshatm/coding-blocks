#include <iostream>
using namespace std;

void stairCaseSearch(int a[][4], int n, int m, int key) {
	int i = 0, j = m - 1;
	bool iskeypresent = false;
	while (i < n && j >= 0) {
		if (a[i][j] == key) {
			iskeypresent = true;
			cout << "Key is found at index " << i << ", " << j;
			break;
		}
		else if (a[i][j] > key) {
			j--;
		}
		else {
			i++;
		}
	}
	if (!iskeypresent) {
		cout << "Key is not present";
	}
	cout << endl;
}

int main() {
	int a[4][4] = {
		{1, 4, 8, 10},
		{2, 5, 9, 15},
		{2, 13, 18, 20},
		{11, 14, 21, 25}
	};
	int n = 4, m = 4;
	int key;

	cin >> key;

	// calling staircase Search

	stairCaseSearch(a, n, m, key);
	return 0;
}
