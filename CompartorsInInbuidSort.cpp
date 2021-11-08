#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool compare(int a, int b){
    return n;
}

int main(){
    int arr[] = {1, 100,72, 3, 4};
    int n = sizeof(arr)/sizeof(int);
    printArray(arr, n);
    sort(arr, arr+n, compare);
    printArray(arr, n);
    return 0;
}
