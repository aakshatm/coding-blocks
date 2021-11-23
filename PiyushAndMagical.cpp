#include <iostream>
using namespace std;

int main() {
	int n, m, k, s;
	cin >> n >> m >> k >> s;

	// creating the 2d array as park
	char a[n][m];


	bool willEscape = true;
	// park ka input
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}



	for (int row = 0; row < n; row++) {
		for (int col = 0; col < m; col++) {
			if (s <= k) {
				willEscape = false;
				break;
			}


			if (col == m - 1) {
				if (a[row][col] == '.') {
					s = s - 2;
				}
				else if (a[row][col] == '*') {
					s = s + 5;
				}
				else if (a[row][col] == '#') {
					break;
				}
			}


			else if (a[row][col] == '.') {
				s = s - 3;
			}
			else if (a[row][col] == '*') {
				s = s + 4;
			}
			else if (a[row][col] == '#') {
				break;
			}
		}
	}

	if (willEscape == true) {
		cout << "Yes" << endl << s;
	}
	else {
		cout << "No";
	}
	return 0;
}
