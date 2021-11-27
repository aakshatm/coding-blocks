#include <iostream>
using namespace std;

void clearBit(int &n, int i) {
	int mask = (1 << i);
	mask = (~mask);
	n = (n & mask);
}

void updateBit(int &n, int i, int v) {
	int mask = (1 << i);
	mask = (~mask);
	n = (n & mask);
	n = (n | (v << i));
}


bool isOdd(int n) {
	int lsb = (n & 1);
	return lsb;
}

void setBit(int &n, int i) {
	int mask = (1 << i);
	n = (n | mask);
}

bool valueBit(int n, int i) {
	int mask = (1 << i);
	int bit = (n & mask);
	bit = (bit >> i);
	return bit;
}


int main() {
	int n = 22;
	// if (isOdd(n)) {
	// 	cout << "Odd";
	// }
	// else {
	// 	cout << "Even";
	// }

	int ans = 0;
	for (int i = 0; i <= 32; i++) {
		if (valueBit(n, i))
			ans++;
	}
	cout << ans << endl;

	return 0;
}
