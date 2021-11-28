#include <iostream>
using namespace std;

int main() {
	int a[] = {6, 6, 3, 5, 1, 1};
	int n = sizeof(a) / sizeof(int);

	// finding the bitwise xor of all the numbers in a;

	int Xor = 0;
	for (int i = 0; i < n; i++) {
		Xor = (Xor ^ a[i]);
	}


	// finding 1 bit in Xor

	
	int indx = 0;
	while (Xor > 0) {
		if ((Xor & 1) > 0) {
			break;
		}
		indx++;
		Xor = (Xor >> 1);
	}

	// segregate based on 1 bit
	int a1[n] = {0}; // 1 bit is added
	int a2[n] = {0}; // 0 bit is added
	int i = 0, j = 0;
	int mask = (1 << indx);
	for (int k = 0; k < n; k++) {
		if ((mask & a[k]) > 0) {
			a1[i++] = a[k];
		}
		else {
			a2[j++] = a[k];
		}
	}

	int n1 = sizeof(a1) / sizeof(int);
	int n2 = sizeof(a2) / sizeof(int);

	// for (int k = 0; k < n1; k++) {
	// 	cout << a1[k] << " ";
	// }
	// cout << endl;
	// for (int k = 0; k < n2; k++) {
	// 	cout << a2[k] << " ";
	// }

	// printing first unique number
	int unq1 = 0;
	for (i = 0; i < n1; i++) {
		unq1 = (unq1 ^ a1[i]);
	}

	// printing second unique number
	int unq2 = 0;
	for (i = 0; i < n2; i++) {
		unq2 = (unq2 ^ a2[i]);
	}

	cout << unq1 << " " << unq2 << endl;

	return 0;
}
