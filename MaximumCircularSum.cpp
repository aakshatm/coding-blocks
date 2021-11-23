#include <iostream>
#include <climits>
using namespace std;

int maxNWSum(int a[], int n){
	int maxSum = 0;
	int curSum = 0;
	for (int i = 0; i<n; i++){
		curSum += a[i];
		if (curSum > maxSum){
			maxSum = curSum;
		}
		if (curSum < 0){
			curSum = 0;
		}
	}
	return maxSum;
}


// to find sum of wrapped elements just subtract the sum of remeaning elements from the total sum
int maxWSum(int a[], int n){

	// calc total
	int total = 0;
	for (int i = 0; i<n; i++){
		total += a[i];
		// invert the sign 
		a[i] = -a[i];
	}

	int maxSum = 0;
	int curSum = 0;

	for (int i = 0; i<n; i++){
		curSum += a[i];
		if (curSum < 0){
			curSum = 0;
		}
		if ((total + curSum) > maxSum){
			maxSum = total + curSum;
		}
	}

	return maxSum;
}

int main()
{
	// finding maximum sum in all the non wrapping sub arrays
	
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n; 
		int a[n];
		for (int i = 0; i<n; i++){
			cin >> a[i];
		}

		int maxNonWrappedSum = maxNWSum(a, n);
		int maxWrappedSum = maxWSum(a, n);

		cout << max(maxNonWrappedSum, maxWrappedSum) << endl;
	}
	return 0;
}