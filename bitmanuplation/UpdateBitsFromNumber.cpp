#include <iostream>
using namespace std;

void clearRangeOfBits(int &n, int j, int i) {
	int ma = (~0);
	ma = (ma << j);

	int mb = (1 << i) - 1;

	int mask = (ma | mb);

	n = (n & mask);

}

void updateBitsinNbyM(int &n, int m, int i, int j) {
	// update m
	m = (m << (i - 1));
	// update n
	clearRangeOfBits(n, j, i - 1);

	n = (n | m);

}

int main() {
	int n = 15;
	int m = 2;

	int i = 2;
	int j = 4;

	updateBitsinNbyM(n, m, i, j);
	cout << n << endl;
	return 0;
}
