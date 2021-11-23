#include <iostream>
#include <algorithm> // to use the find function
using namespace std;

int main() {
	int a[] = {1, 2, 3, 4, 6, 8 , 23};
	int n = sizeof(a) / sizeof(int);

	int key;
	cin >> key;

	int* ans = find(a, a + n, key); // it returns the address of the found element
	int indx = ans - a;	// substrating the address of key with base address to find the index of key

	if (indx == n) {
		cout << "Key not present" << endl;
	}
	else {
		cout << "Key is present at " <<  indx << endl;
	}

	return 0;
}
