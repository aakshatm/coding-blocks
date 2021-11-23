#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b) {
	return a <= b;
}

int main() {
	int coins[] = {1, 2, 5, 10, 20, 50, 100};
	int n = sizeof(coins) / sizeof(int);

	int money = 50;
	while (money > 0) {
		// int* resultantCoin = upper_bound(coins, coins + n, money) - 1;
		int* resultantCoin = lower_bound(coins, coins + n, money, compare) - 1;  // change the cond. from >=key to <=key
		cout << "We will give the coin " << *resultantCoin << endl;

		money = money - *resultantCoin;
	}

	return 0;
}
