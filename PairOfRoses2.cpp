#include <iostream>
#include<climits>
#include<math.h>
#include<algorithm>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int arr[10000];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int m;
        cin >> m;
        int first, second, diff, min_diff = INT_MAX;

        int i = 0;
        int j = n - 1;
        while (i < j) {
            int sum = 0;
            sum = arr[i] + arr[j];
            if (sum == m) {
                diff = abs(arr[j] - arr[i]);
                if (diff < min_diff) {
                    min_diff = diff;
                    first = min(arr[i], arr[j]);
                    second = max(arr[i], arr[j]);
                }
                i++;
                j--;
            }
            else if (sum < m) {
                i++;
            }
            else {
                j--;
            }
        }


        cout << "Deepak should buy roses whose prices are " << first << " and " << second << "." << endl;
    }
}
