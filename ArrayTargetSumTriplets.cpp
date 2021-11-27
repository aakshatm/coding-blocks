#include <iostream>
#include <algorithm>
using namespace std;

// void arrayTripletSumPairs(int a[], int n, int target) {
// 	int i = 0, k = 1, j = n - 1;
// 	while (i < k and k < j) {
// 		int sum = a[i] + a[k] + a[j];
// 		if (sum > target) {
// 			if ( k < (j - 1)) {
// 				j--;
// 			}
// 			else if (i < (k - 1)) {
// 				k--;
// 			}
// 			else if ((i - 1) > 0) {
// 				i--;
// 			}
// 		}

// 		else if (sum < target) {
// 			if ((k + 1) < j) {
// 				k++;
// 			}
// 			else if ((j + 1) < n) {
// 				j++;
// 			}
// 			else if ((i + 1) < k) {
// 				i++;
// 			}
// 		}

// 		else {
// 			cout << a[i] << ", " << a[k] << " and " << a[j] << endl;
// 			if ((k + 1) < j) {
// 				k++;
// 			}
// 			else if ( (i + 1) < k) {
// 				i++;
// 			}
// 			else {
// 				j--;
// 			}
// 		}
// 	}
// }

void arrayTripletSumPairs(int a[], int n, int target) {
	for (int i = 0; i < n - 2; i++) {
		int l = i + 1, r = n - 1;
		while (l < r) {
			int sum = a[i] + a[l] + a[r];
			if (sum < target) {
				l++;
			}
			else if (sum > target) {
				r--;
			}
			else {
				cout << a[i] << ", " << a[l] << " and " << a[r] << endl;
				l++;
				r--;
			}
		}
	}
}


int main() {
	int n, target;
	cin >> n;
	int a[n];
	for (int i = 0; i < n ; i++) {
		cin >> a[i];
	}
	cin >> target;


	sort(a, a + n);
	arrayTripletSumPairs(a, n, target);


	return 0;
}
