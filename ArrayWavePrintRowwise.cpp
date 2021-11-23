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

	// printing the wave patern

	for (int row = 0; row < m; row ++) {
		if (row % 2 == 0) {
			for (int col = 0; col < n; col++) {
				cout << a[row][col] << ", ";
			}
		}
		else {
			for (int col = n - 1; col >= 0; col--) {
				cout << a[row][col] << ", ";
			}
		}
	}

	cout << "END";

	return 0;
}
