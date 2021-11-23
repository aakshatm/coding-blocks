#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

void arrayInput(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int minimumDifference(int a[], int n, int money) {
	int minimumDifference = INT_MAX;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] + a[j] == money ) {

				if (minimumDifference > abs(a[i] - a[j])) {
					minimumDifference = abs(a[i] - a[j]);
				}

			}
		}
	}
	return minimumDifference;
}

void pairOfRoses(int a[], int n, int money) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] + a[j] == money && abs(a[i] - a[j]) == minimumDifference(a, n, money)) {
				if (a[i] <= a[j]) {
					cout << "Deepak should buy roses whose prices are " << a[i] << " and " << a[j] << ".";
					cout << endl;
				}
				else {
					cout << "Deepak should buy roses whose prices are " << a[j] << " and " << a[i] << ".";
					cout << endl;
				}
				return;
			}
		}
	}
}

int main() {
	// take no of test cases as input
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int a[n];

		// array input
		arrayInput(a, n);
		int money;
		cin >> money;

		// print what 2 types of roses should he buy

		pairOfRoses(a, n, money);

	}
	return 0;
}
