#include <iostream>
using namespace std;

int main() {
	int m, n, key;
	cin >> m >> n;

	int a[m][n];
	// taking input of the 2d array

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	cin >> key;

	// main code
	int i = 0, j = n - 1;
	bool iskeypresent = false;
	while (i<n and j >= 0) {
		if (a[i][j] == key) {
			cout << 1;
			iskeypresent = true;
			break;
		}
		else if (a[i][j] > key) {
			j--;
		}
		else {
			i++;
		}
	}

	if (!iskeypresent)
		cout << 0;

	return 0;
}
