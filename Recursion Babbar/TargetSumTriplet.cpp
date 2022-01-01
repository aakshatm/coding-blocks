#include<bits/stdc++.h>
using namespace std;

void arrayinput(int* arr, int n){
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
}

void printTripetSum(int *a, int n, int target){
    for (int i = 0; i<n-2; i++){
        int left = i+1;
        int right = n - 1;
        while (left < right){
            if (a[i] + a[left] + a[right] == target){
                cout << a[i] << ", " << a[left] << " and " << a[right] << endl;
                left++;
                right--;
            }
            else if (a[i] + a[left] + a[right] > target){
                right--;
            }
            else{
                left++;
            }
        }
    }
}

int main()
{
    int n; 
    cin >> n; 
    int a[n];
    arrayinput(a, n);
    int target; 
    cin >> target;
    sort(a, a + n);
    printTripetSum(a, n, target);
    return 0;
}