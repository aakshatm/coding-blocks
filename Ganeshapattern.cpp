#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int row, col;
	// upper half

	for (row = 1; row <= n / 2; row++) {
		if (row == 1) {
			cout << "*";
			// print spaces (n/2-1)
			for (col = 1; col <= (n / 2 - 1); col++) {
				cout << " ";
			}
			// print stars (n+1)/2
			for (col = 1; col <= ((n + 1) / 2); col++) {
				cout << "*";
			}
		}
		else {
			cout << "*";
			// print spaces (n/2-1)
			for (col = 1; col <= (n / 2 - 1); col++) {
				cout << " ";
			}

			cout << "*";
		}
		cout << endl;

	}

	// middle line
	for (int i = 0; i < n; i++) {
		cout << "*";
	}
	cout << endl;

	// lower part
	for (row = 1; row <= n / 2; row++) {
		// spaces n/2
		if (row == n / 2) {
			for (col = 1; col <= ((n + 1) / 2); col++) {
				cout << "*";
			}
			for (col = 1; col <= ((n / 2) - 1); col++) {
				cout << " ";
			}
			cout << "*";
		}
		else {
			for (col = 1; col <= n / 2; col++) {
				cout << " ";
			}
			cout << "*";
			for (col = 1; col <= ((n / 2) - 1); col++) {
				cout << " ";
			}
			cout << "*";

		}
		cout << endl;

	}
	return 0;
}

