#include <iostream>
using namespace std;

int main() {

	int testCases;
	cin >> testCases;

	while (testCases--) {
		int c1, c2, c3, c4;
		cin >> c1 >> c2 >> c3 >> c4; // taking input of costs
		int n, m;
		cin >> n >> m; // taking inputs of number of rickshaws and cabs needed

		// no of times ricksaws i is going to be used
		int noOfithRicksawRide[n];
		for (int i = 0; i < n; i++) {
			cin >> noOfithRicksawRide[i];
		}

		// no of times cab i is going to be used
		int noOfithCabRide[m];
		for (int i = 0; i < m; i++) {
			cin >> noOfithCabRide[i];
		}

		// calculating the minimum cost of using the rickshaws
		int rickMinCost = 0;

		for (int i = 0; i < n; i++) {
			rickMinCost = rickMinCost + min(noOfithRicksawRide[i] * c1, c2);
		}
		rickMinCost = min(rickMinCost, c3);

		// calculting the minimum cost of using the cabs

		int cabMinCost = 0;

		for (int i = 0; i < m; i++) {
			cabMinCost = cabMinCost + min(noOfithCabRide[i] * c1, c2);
		}
		cabMinCost = min(cabMinCost, c3);


		// calculating the total minimum cost

		int totalMinCost;
		totalMinCost = min(rickMinCost + cabMinCost, c4);


		cout << totalMinCost << endl;


	}
	return 0;
}
