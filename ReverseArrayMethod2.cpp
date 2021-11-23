#include <iostream>
using namespace std;

void printArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}

void reverseArray(int a[], int n) {
	// using two pointer approach
	int x = 0, y = n - 1;
	while (x < y) {
		swap(a[x], a[y]);
		x++;
		y--;
	}
}

int main() {
	// taking input of array

	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// calling revarray function
	reverseArray(a, n);

	// print array

	printArray(a, n);
	return 0;
}
