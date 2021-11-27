#include <iostream>
#include <climits>
using namespace std;


int rainWaterTapping(int a[], int n) {
	// to store the value of rainwater
	int res = 0;

	// to get the left and right maximum of the element
	for (int i = 1; i < n - 1; i++) {
		int leftmax = a[i], rightmax = a[i];
		// finding left max
		for (int j = 0; j < i; j++) {
			leftmax = max(a[j], leftmax);
		}

		// finding right max
		for (int j = i + 1; j < n; j++) {
			rightmax = max(a[j], rightmax);
		}

		res = res + min(rightmax, leftmax) - a[i];
	}

	return res;
}



int main() {
	// driver code

	int testCases;
	cin >> testCases;

	while (testCases--) {
		int n;
		cin >> n;
		int a[n];

		// array input
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		cout << rainWaterTapping(a, n) << endl;

	}
	return 0;
}
