#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	int a1[n];

	for (int i = 0; i < n; i++) {
		cin >> a1[i];
	}

	cin >> m;

	int a2[n];

	for (int i = 0; i < m; i++) {
		cin >> a2[i];
	}

	//main code
	int sum1 = 0, sum2 = 0, sum;

	for (int i = 0; i < n; i++) {
		sum1 += a1[i];
	}

	for (int i = 0; i < m; i++) {
		sum2 += a2[i];
	}

	sum = sum1 + sum2;

	return 0;
}
