#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


void arrayInput(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int windowsum(int a[], int i, int j) {
	int sum = 0;
	for (int k = i; k <= j; k++) {
		sum += a[k];
	}
	return sum;
}

int maxSumOfConsecutiveNums(int a[], int n) {
	// sorting the array in ascending order
	sort(a, a + n);

	// using sliding window: window will expand and srink and move to right
	int i = 0, j = 0;

	// Intializing the Max Sum
	int maxSum = INT_MIN;

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int windowSum = windowsum(a, i, j);
			maxSum = max(maxSum, windowSum);
		}
	}

	return maxSum;
}


int main() {
	int n;
	cin >> n;

	int a[100];
	arrayInput(a, n);

	cout << maxSumOfConsecutiveNums(a, n);

	return 0;
}
