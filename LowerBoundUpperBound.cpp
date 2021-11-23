#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[] = {10, 20, 40, 40, 40, 50};
	int n = sizeof(a) / sizeof(int);
	int* lb = lower_bound(a, a + n, 40);
	int* ub = upper_bound(a, a + n, 40);
	cout << "value of lower bound is " << *lb << " is at index " <<  lb - a << endl;
	cout << "value of upper bound is " << *ub << " is at index " << ub - a << endl;
	return 0;
}
