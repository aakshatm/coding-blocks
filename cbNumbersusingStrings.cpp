#include <iostream>
#include <string>
using namespace std;

// below two functions are to check the cb numbers

bool isPrime(int n) {
	bool isPrime = true;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			isPrime = false;
		}
	}
	return isPrime;
}

bool isCodingBlocksNumber(int n) {
	if (n == 1 or n == 0) {
		return false;
	}
	if ((n >= 2 and n <= 29) and isPrime(n) == true) {
		return true;
	}

	for (int i = 2; i <= 29; i++) {
		if (isPrime(i) == true && (n % i == 0)) {
			return false;
		}
	}

	return true;

}

// str to int function

int strtoint(string s) {
	int len = s.length();
	int no = 0;
	for (int i = 0; i < len; i++) {
		int digit = s[i] - '0';
		no = no * 10 + digit;
	}
	return no;
}

bool isVerified(bool visited[], string s, int start, int end) {
	for (int i = start; i <= end; i++) {
		if (visited[i] == 1) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;



	// making a array to check the digits which we have already accounted for
	bool visited[n] = {0}; // intializing all the values to be false intially

	// first we will check len = 1 substring then move on len = 2 and so on so that we can get MAX no of cb numbers;
	int cnt = 0;
	// outer loop will be of len ;
	for (int len = 1; len <= s.length(); len++) {
		// inner loop will take a iterator i and make a string string from indx [i, i+len) that means of length len
		for (int i = 0; i <= s.length() - len; i++) {
			// make a substring to check of main string of indx [i, i+len) and check whether it is cb no or not;
			string subStr = s.substr(i, len);
			if (isCodingBlocksNumber((strtoint(subStr))) and isVerified(visited, subStr, i, i + len - 1)) {
				cnt++;
				for (int k = i; k < i + len; k++) {
					visited[k] = 1;
				}
			}
		}
	}

	cout << cnt;

	return 0;
}
