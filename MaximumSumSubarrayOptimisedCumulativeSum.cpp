#include <iostream>
using namespace std;

void maximumSumSubArray(int a[], int n){
    int wi, wj;
    int csum[1000] = {0};
    int max_sum = INT_MIN;

    // Precomputation: calulating cumulative sum array
    for (int i = 1; i<n; i++){
        csum[i] += a[i] + csum[i-1];
    }

    // Calculating the maximum sum;
    for (int i = 0; i<n; i++){
        for (int j = i; j<n; j++){
            int sum = 0;
            sum = csum[j] - csum[i-1];
            if (sum > max_sum){
                max_sum = sum;
                wi = i ;
                wj = j;
            }
        }

    }
    for (int i = wi; i<=wj; i++){
        cout << a[i] << " ";
    }

}

int main(){
    int arr[] = {0, -1, 100 ,-12, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    maximumSumSubArray(arr, n);
    return 0;
}
