#include <iostream>
using namespace std;

int main() {
	int n, x;

	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cin >> x;
	// copying the original array to temp array
	int temp[n];
	for (int i = 0; i < n; i++) {
		temp[i] = a[i];
	}

	x = x % n;  // % if x > n;

	for (int i = 0; i < n; i++) {
		a[i] = temp[i] + temp[(i - x + n) % n]; // it handle both the cases where i<x and i>=x;
	}

	for (int i = 0; i < n ; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
