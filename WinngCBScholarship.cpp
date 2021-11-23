#include <iostream>
using namespace std;

int main() {
	int n, m, x, y;
	cin >> n >> m >> x >> y;

	int cnt = 0; // no of student we can give fee waiver

	if ((m / n) >= x) {
		cout << n;
	}
	else {

		int maxStudent = 0; // that will get fee waiver
		// lets start eliminating the students
		int i = 1; // no of eliminated students
		while (i <= n) {
			int totalCoupons = m;
			totalCoupons += i * y;


			// calculate the no of students that will get fees waivr
			int students = 0;
			while (true) {
				totalCoupons -= x;
				if (totalCoupons > 0) {
					students++;
				}
				else {
					break;
				}
			}
			if (students >= maxStudent) {
				maxStudent = students;
			}
			i++;
		}
		cout << maxStudent;
	}
	return 0;
}
