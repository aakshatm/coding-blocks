#include <iostream>
using namespace std;

int binarySearch(int a[], int key, long long int min, long long int max) {
	if (min <= max) {
		long long int mid = (min + max) / 2;
		if (key == a[mid]) {
			return mid;
		}
		else if (key > a[mid]) {
			// shift lower bound to mid + 1
			return binarySearch(a, key, mid + 1, max);
		}
		else {
			// shift upper bound to mid - 1
			return binarySearch(a, key, min, mid - 1);
		}
	}
	return -1;
}

int main() {
	long long int n;
	cin >> n;

	// array input
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	int key;
	cin >> key;
	cout << binarySearch(a, key, 1, n - 1);
	return 0;
}
