#include <iostream>
using namespace std;

void performcircularAddition(int a[], int n, int x) {
	int originalArray[n];
	// storing values of the input array in original array to preserve it
	for (int i = 0; i < n; i++) {
		originalArray[i] = a[i];
	}

	// perform circular addition and modify input array
	for (int i = 0; i < x; i++) {
		a[i] = a[i] + a[i + n - x];
	}

	for (int i = x; i < n; i++) {
		a[i] = a[i] + originalArray[i - x];
	}

}

int calcSum(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}


int main() {
	int n;
	cin >> n;
	int a[n];

	// Array input
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// perform operation q times
	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		int x;
		cin >> x;
		performcircularAddition(a, n, x);
	}

	// print sum of the elements of resultant array

	cout << calcSum(a, n);

	return 0;
}
