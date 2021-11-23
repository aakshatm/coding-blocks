#include <iostream>
#include <climits>
#include <cstring>
using namespace std;

int main() {
	// taking string input
	char a[1000];
	char largeststr[1000];
	int largestlength = 0;
	int n;
	cin >> n;
	cin.get();  // to ignore the first \n and move the i/p forward by one step
	for (int i = 0; i < n; i++) {
		cin.getline(a, 100);
		if (strlen(a) > largestlength) {
			largestlength = strlen(a);
			// copying value of a in largeststr
			for (int j = 0; j <= strlen(a); j++) {
				largeststr[j] = a[j];
			}
		}
	}
	cout << largeststr << endl;
	return 0;
}
