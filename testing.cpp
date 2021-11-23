#include <iostream>
using namespace std;

int main() {
	// upper half
	int n;
	cin >> n;
	int row, col;
	for (row = 1; row <= (n + 1) / 2; row++) {
		// n+1 -2*row
		for (col = 1; col <= n + 1 - 2 * row; col++) {
			cout << "  ";
		}

		if (row == 1) {
			cout << 1 << " ";
		}

		else {
			// print numbers in decreasing order starting from the row number
			for (col = row; col >= 1; col--) {
				cout << col << " ";
			}
			// print spaces
			for (col = 1; col <= 2 * row - 3; col++) {
				cout << "  ";
			}

			// print numbers in increasing order starting from the 1 to row number
			for (col = 1; col <= row; col++) {
				cout << col << " ";
			}
		}
		cout << endl;
	}

	for (row = (n + 1) / 2; row >= 1; row--) {
		// n+1 -2*row
		for (col = 1; col <= n + 1 - 2 * row; col++) {
			cout << "  ";
		}

		if (row == 1) {
			cout << 1 << " ";
		}

		else {
			// print numbers in decreasing order starting from the row number
			for (col = row; col >= 1; col--) {
				cout << col << " ";
			}
			// print spaces
			for (col = 1; col <= 2 * row - 3; col++) {
				cout << "  ";
			}

			// print numbers in increasing order starting from the 1 to row number
			for (col = 1; col <= row; col++) {
				cout << col << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
