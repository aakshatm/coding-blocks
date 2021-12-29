#include <iostream>
using namespace std;

void guud(int hours, int seq) {
	if ((hours >= 1 && hours <= 24) && (seq >= 2 && seq <= 4)) {
		int cnt = 1;
		for (int i = 1; i <= hours; i++) {
			cnt = cnt * seq;
		}
		cout << cnt;
	}

	else {
		cout << "Invalid input";
	}
}

int main() {
	int hours = 6;
	int seq  = 2;
	guud(hours, seq);
	return 0;
}
