#include <iostream>
using namespace std;

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

bool isCodingBlocksString(char a[], int n, int i, int j) {

	// converting str to no
	long long int no = 0;
	for (int k = i; k <= j; k++) {
		int digit = a[k] - '0';
		no = no * 10 + digit;
	}

	// checking is the number cb number

	if (isCodingBlocksNumber(no)) {
		return true;
		// cout << no << endl;
	}
	return false;
}

bool isValid(char str[], bool visited[], int start, int end) {
	for (int i = start; i <= end; i++) {
		if (visited[i] == true) {
			return false;
		}
	}
	return true;
}


int main() {
	int n;
	cin >> n;

	char str[100];
	// taking string input
	cin.get();
	cin.getline(str, n + 1);

	// creating the visited boolean array to mark the digits to 1 which i have already itereated and are cb numbers
	bool visited[n] = {0}; // marking all the binary to 0s to initialize the visited array



	int cnt = 0;

	for (int i = 0; i < n ; i++) {
		for (int j = i; j < n; j++) {
			if (isCodingBlocksString(str, n, i, j) == true and isValid(str, visited, i, j)) {


				visited[j] = true;
				cnt++;
			}
			// isCodingBlocksString(str, n, i, j);
		}
	}

	cout << cnt;




}
