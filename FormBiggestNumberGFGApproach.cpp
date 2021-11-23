

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// creating custom compare function




bool compare (string x, string y) {
	string xy = x.append(y); // x + y
	string yx = y.append(x);
	if (xy > yx) {
		return true; // if compare returns true it means first argument before second and vice versa
	}
	else {
		return false ;
	}
}

int main() {
	int testCases;
	cin >> testCases;


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


		sort(a, a + n, compare);

		// printing the number
		for (int i = 0; i < n; i++) {
			cout << a[i];
		}

		return 0;
	}
}
