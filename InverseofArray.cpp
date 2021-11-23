#include <iostream>
using namespace std;

void arrayInput(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void inverseArray(int a[], int n) {
	int newarr[n];
	for (int i = 0; i < n; i++) {
		newarr[a[i]] = i;
	}

	// printing the reversed array

	for (int i = 0; i < n; i++) {
		cout << newarr[i] << " ";
	}
}


int main() {
	int n;
	cin >> n;
	int a[n];

	// taking array input
	arrayInput(a, n);

	// print inverse of the array
	inverseArray(a, n);

	return 0;
}
