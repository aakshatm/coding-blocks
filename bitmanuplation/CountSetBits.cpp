#include <iostream>
using namespace std;

int countSetBit(int n) {
	int cnt = 0;

	while (n != 0) {
		if ((n & 1) == 1) {
			cnt++;
		}
		n = n >> 1;
	}
	return cnt;
}

int main() {
	int n = 11;
	cout << "No of set bits in " << n << " is " << countSetBit(n);
	return 0;
}
