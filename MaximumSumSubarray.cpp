#include <iostream>
#include <climits>
using namespace std;

void generatingSubarrays(int a[], int n){
    for (int i = 0; i<n; i++){
        for (int j = i; j<n; j++){
            for (int k = i; k<=j; k++){
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
}


int calculateMaxSumInSubarray(int a[], int n){
    int max_sum = INT_MIN;
    for (int i = 0; i<n; i++){
        for (int j = i; j<n; j++){
            int sum = 0;
            for (int k = i; k<=j; k++){
                sum += a[k];
            }
            if (sum > max_sum){
                max_sum = sum;
            }
        }
    }
    return max_sum;
}

void printMaxSumSubarray(int a[], int n){
    int max_sum = INT_MIN, wi, wj;
       for (int i = 0; i<n; i++){
        for (int j = i; j<n; j++){
            int sum = 0;
            for (int k = i; k<=j; k++){
                sum += a[k];
            }
        if (sum > max_sum){
            max_sum = sum;
            wi = i;
            wj = j;
        }
            // if (sum == max_sum){
            //     for (k = i; k<=j; k++){
            //         cout << a[k] << " ";
            //     }
     }
   }
   for (int i = wi; i<=wj; i++){
    cout << a[i] << " ";
   }
}




int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    printMaxSumSubarray(arr, n);


    return 0;
}
