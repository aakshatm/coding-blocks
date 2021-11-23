#include <iostream>
using namespace std;

void itempriceinput(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int calcTotalChoices(int a[], int n, int totalMoney) {
	// looping to price to items
	int choices = 0;
	for (int i = 0; i < n; i++) {
		int itemprice = a[i];
		if ((itemprice <= totalMoney) && (totalMoney % itemprice == 0)) {
			choices++;
		}
	}
	return choices;
}


int main() {
	int n;
	cin >> n;
	int itemprices[n];
	// Taking input of item prices

	itempriceinput(itemprices, n);

	// taking no of queries
	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		int totalMoney, choices, ToldChoices;

		cin >> totalMoney >> ToldChoices;

		choices = calcTotalChoices(itemprices, n, totalMoney);

		if (choices >= ToldChoices) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}

	}
	return 0;
}
