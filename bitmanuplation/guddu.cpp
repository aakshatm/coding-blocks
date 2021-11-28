#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[] = {10, 2, 4, 13, 21, 18};
	int n = sizeof(a) / sizeof(int);
	sort(a, a + n);
	cout << "Min: " << a[0] << endl;
	cout << "Max: " << a[n - 1] << endl;
	return 0;
}
