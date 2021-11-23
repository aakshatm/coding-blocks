#include <iostream>
#include <climits>
using namespace std;

int maxSumSubarray(int a[], int n) {
	int maxSum = INT_MIN;
	int curSum = 0;
	for (int i = 0; i < n; i++) {
		curSum = curSum + a[i];
		if (curSum > maxSum) {
			maxSum = curSum;
		}
		if (curSum < 0) {
			curSum = 0;
		}
	}
	return maxSum;
}


int main() {
	int a[] = { -5, -4, -2, -6, -13};
	int n = sizeof(a) / sizeof(int);

	cout << maxSumSubarray(a, n);

	return 0;
}

