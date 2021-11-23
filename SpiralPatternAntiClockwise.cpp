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

	// printing the anticlockwise spiral pattern

	int sr, er, sc, ec;
	sr = 0, er = m - 1;
	sc = 0, ec = n - 1;

	while (sr <= er and sc <= ec) {
		// print the starting column in increasing order
		for (int row = sr; row <= er; row++) {
			cout << a[row][sc] << ", ";
		}
		sc++;

		// print the ending row in increasing order
		for (int col = sc; col <= ec; col++) {
			cout << a[er][col] << ", ";
		}
		er--;

		// print the ending column in decreasing order
		if (sc <= ec) {
			for (int row = er; row >= sr; row--) {
				cout << a[row][ec] << ", ";
			}
			ec--;
		}

		// print the starting row in decreaing order
		if (sr <= er) {
			for (int col = ec; col >= sc; col--) {
				cout << a[sr][col] << ", ";
			}
			sr++;
		}
	}

	cout << "END";
	return 0;
}
