#include <iostream>
using namespace std;

int main() {
	char a[100];
	int n;
	cin >> n;
	cin.get();  // to ignore the first \n and move the i/p forward by one step
	for (int i = 0; i < n; i++) {
		cin.getline(a, 100);
		cout << a << endl;
	}

	return 0;
}
