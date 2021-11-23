#include <iostream>
#include <cstring>
using namespace std;

void rotateString(char a[], int n) {
	// move the elements of character array n steps forward
	int len = strlen(a);
	int i = len - 1;
	while (i >= 0) {
		a[i + n] = a[i];
		i--;
	}

	// copy last n elements in the begining of the string

	i = 0;
	int j = len;
	while (i < n) {
		a[i] = a[j];
		i++; j++;
	}

	// add null character at the end of rotated array

	a[len] = '\0';
	return ;

}


void rotateOneTime(char a[]) {
	int len = strlen(a);
	char pickUpElement = a[len - 1];
	// moving all elements 1 step forward
	int i = len - 2;
	while (i >= 0) {
		a[i + 1] = a[i];
		i--;
	}
	a[0] = pickUpElement;

}

void rotateString2(char a[], int n) {
	for (int i = 0; i < n; i++) {
		rotateOneTime(a);
	}
}

int main() {
	char str[100] = "coding";
	int n;
	cin >> n;
	cout << "Before rotation: " << str << endl;
	rotateString2(str, n);
	cout << "After rotation: " << str << endl;
	return 0;
}
