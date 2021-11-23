#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

long long int strtoint(string s) {
	int len = s.length();
	long long int no = 0;
	for (int i = 0; i < s.length(); i++) {
		int digit = s[i] - '0';
		no = no * 10 + digit;
	}
	return no;
}

// int iThDigit(string s, int i) {
// 	if (i > s.length()) {
// 		return 0;
// 	}
// 	return s[i - 1] - '0';
// }

// bool compare(string a, string b) {
// 	int n = 1;
// 	while (iThDigit(a, n) == iThDigit(b, n)) {
// 		n += 1;
// 	}
// 	return iThDigit(a, n) > iThDigit(b, n);
// }

string stringArrToString(string a[], int n) {
	string no = "";
	for (int i = 0; i < n; i++) {
		string s = a[i];
		no = no + s;

	}
	return no;

}


int main() {
	int testCases;
	cin >> testCases;

	// string s = "5454654860";
	// cout << strtoint(s);
	while (testCases--) {
		int n;
		cin >> n;
		// creating string array
		string a[n];
		cin.get();

		//taking string array input
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}


		sort(a, a + n);
		long long int max = INT_MIN;

		do {
			long long int num = strtoint(stringArrToString(a, n)); // basically converting the string arr to int
			if (num >= max) {
				max = num;
			}
		} while (next_permutation(a, a + n));

		cout << max;

	}


	return 0;
}
