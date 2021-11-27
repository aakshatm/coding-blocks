#include <iostream>
using namespace std;

int maxPathSum(int a1[], int n, int a2[], int m) {
	int i = 0, j = 0, sum1 = 0, sum2 = 0, res = 0;
	while (i < n and j < m) {
		if (a1[i] < a2[j]) {
			sum1 += a1[i++];
		}
		else if (a1[i] > a2[j]) {
			sum2 += a2[j++];
		}
		else {
			res += max(sum1, sum2) + a1[i];
			sum1 = 0;
			sum2 = 0;
			i++;
			j++;
		}
	}

	while (i < n) {
		sum1 += a1[i++];
	}

	while (j < m) {
		sum2 += a2[j++];
	}

	res += max(sum1, sum2);

	return res;
}




// driver code
int main() {
	int testCases;
	cin >> testCases;
	while (testCases--) {
		int n, m;
		cin >> n >> m;
		int a1[n];
		int a2[m];
		for (int i = 0; i < n; i++) {
			cin >> a1[i];
		}

		for (int i = 0; i < m; i++) {
			cin >> a2[i];
		}

		cout << maxPathSum(a1, n, a2, m) << endl;
	}
	return 0;
}
