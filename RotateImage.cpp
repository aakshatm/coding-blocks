#include <iostream>
using namespace std;

void rotateImage(int a[][100], int n, int m) {

	// Reverse the rows of the array

	for (int row = 0; row < n; row++) {
		int x = 0, y = m - 1; // two pointers
		while (x < y) {
			swap(a[row][x], a[row][y]);
			x++;
			y--;
		}
	}

	// Take Transpose

	for (int row = 0; row < n; row++) {
		for (int col = 0; col < m; col++) {
			if (row > col) {
				swap(a[row][col], a[col][row]);
			}
		}
	}

}

int main() {
	int a[100][100];
	int n, m;
	cin >> n >> m;


	// taking array input
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	// calling the rotate array function

	rotateImage(a, n, m);


	// printing the rotated array
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
