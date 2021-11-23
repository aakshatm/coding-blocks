#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n][n];

	// taking input of the 2d array

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}


	// Main code of rotating the image
	// 1. reverse all the individual rows
	// 2. take the transpose of matrix

	// reverse all the individual rows
	for (int row = 0; row < n; row++) {
		int x = 0;
		int y = n - 1;
		while (x < y) {
			swap(a[row][x], a[row][y]);
			x++;
			y--;
		}
	}

	// tranpose of the matrix
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			if (row > col) {
				swap (a[row][col], a[col][row]);
			}
		}
	}


	// printing the rotated matrix
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
