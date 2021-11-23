#include <iostream>
using namespace std;

void arrayInput(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void targetSumPair(int a[], int n, int target) {
	// using two nested for loops to get all pairs
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] + a[j] == target) {
				if (a[i] > a[j]) {
					cout << a[j] << " and " << a[i] << endl;
				}
				else {
					cout << a[i] << " and " << a[j] << endl;
				}
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	// take array input
	arrayInput(a, n);


	// print target sum pair
	int target;
	cin >> target;
	targetSumPair(a, n, target);
	return 0;
}
