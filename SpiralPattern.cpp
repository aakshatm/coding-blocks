#include <iostream>
using namespace std;

int main() {
	int a[100][100];
	int r, c;

	cin >> r >> c;

	int val = 1;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			a[i][j] = val;
			val++;
		}
	}

	// print the 2d array

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << a[i][j] << " ";

		}
		cout << endl;
	}



	// Spiral Print

	int sr = 0, er = r - 1, sc = 0, ec = c - 1;

	while (sr <= er and sc <= ec) {
		// print the sr
		for (int i = sc; i <= ec; i++) {
			cout << a[sr][i] << " ";
		}

		sr++;
		// print the ec
		for (int i = sr; i <= er; i++) {
			cout << a[i][ec] << " ";
		}
		ec--;

		// print the er
		if (sr < er) {
			for (int i = ec; i >= sc; i--) {
				cout << a[er][i] << " ";
			}
			er--;
		}


		// print the sc
		if (sc < ec) {
			for (int i = er; i >= sr; i--) {
				cout << a[i][sc] << " ";
			}
			sc++;
		}

	}
	return 0;
}
