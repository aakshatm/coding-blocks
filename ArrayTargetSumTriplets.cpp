#include <iostream>
#include <algorithm>
using namespace std;

void arrayInput(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void targetSumPair(int a[], int n, int target) {
	// using two nested for loops to get all pairs
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (a[i] + a[j] + a[k] == target) {
					int pairsarr[] = {a[i], a[j], a[k]};
					sort(pairsarr, pairsarr + 3);
					cout << pairsarr[0] << ", " << pairsarr[1] << " and " << pairsarr[2] << endl;
				}
			}
		}
	}
}


int main() {
	int n;
	cin >> n;
	int a[n];
	// take array input
	arrayInput(a, n);


	// print target sum pair
	int target;
	cin >> target;
	targetSumPair(a, n, target);
	return 0;
}


