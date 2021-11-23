#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[] = {1, 2, 3, 4, 6, 9};
	int n = sizeof(a) / sizeof(int);

	int key;
	cin >> key;

	bool is_Present = binary_search(a, a + n, key); // it returns bool value

	if (is_Present) {
		cout << "The key is present" << endl;
	}
	else {
		cout << "The key is not present" << endl;
	}
	return 0;
}
