#include <iostream>
using namespace std;

void decimalToBinary(int n) {
	int mask = (1 << 30);
	bool isOneFound = false;
	
	if ((mask & n) == 0 and isOneFound == false) {
		mask = mask >> 1;
	}
	else {
		isOneFound = true;
		if ((mask & n) > 0) {
			cout << 1;
		}
		else {
			cout << 0;
		}
		mask = mask >> 1;
	}
}

int main() {
	int n = 15;
	decimalToBinary(n);
	return 0;
}
