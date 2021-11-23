#include <iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	int a[m][n];
	// taking input of the 2d array

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	// main code
	for (int sum = 0; sum <= (n + m); sum++) {
		if (sum % 2 == 0) {
			// rows will go in decreasing order
			// cols will go in increasing order
			for (int row = m - 1; row >= 0; row--) {
				for (int col = 0; col < n; col++) {
					if (row + col == sum) {
						cout << a[row][col] << " ";
					}
				}
			}
		}

		else {
			// row will go in increasing order
			// col will go in decreasing order
			for (int row = 0; row < m; row++) {
				for (int col = n - 1; col >= 0; col--) {
					if (row + col == sum) {
						cout << a[row][col] << " ";
					}
				}
			}

		}

	}
	return 0;
}
