#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// to store higher value binary we will use strings

int decimalToBinaryDivision(int n) {
	int ans = 0;
	int p = 1;
	while (n > 0) {
		ans = ans + (n % 2) * p;
		p *= 10;
		n = n / 2;
	}
	return ans;
}
string decimalToBinaryDivisionString(int n) {
	// int ans = 0;
	// int p = 1;
	string s;
	while (n > 0) {
		// ans = ans + (n % 2) * p;
		// p *= 10;
		s.push_back('0' + n % 2);
		n = n / 2;
	}
	reverse(s.begin(), s.end());
	return s;
}


int decimalToBinaryBitwise(int n) {
	int ans = 0;
	int p = 1;
	while (n != 0) {
		ans = ans + (n & 1) * p;
		p = p * 10;
		n = n >> 1;
	}
	return ans;
}

// using string
string decimalToBinaryBitwiseString(int n) {
	// int ans = 0;
	// int p = 1;
	string s;
	while (n != 0) {
		// ans = ans + (n & 1) * p;
		// p = p * 10;
		s.push_back('0' + (n & 1));
		n = n >> 1;
	}
	reverse(s.begin(), s.end());
	return s;
}



int main() {
	int n = 99999999;
	cout << decimalToBinaryDivisionString(n) << endl << decimalToBinaryBitwiseString(n) << endl;
	return 0;
}
