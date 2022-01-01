#include <iostream>
using namespace std;

void printArr(int *a, int n){
    for (int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void SuperSet(int *arr, int *out, int n, int i, int j){
    // base case
    if (i == n){
        printArr(out, 5);
        return;
    }

    // recursive case
    // 2. ignore ith character to output array 
    SuperSet(arr, out, n, i+1, j);
    // 1. copy ith character to output array
    out[j] = arr[i];
    SuperSet(arr, out, n, i+1, j+1);


}


int main()
{
    int arr[] = {1, 2, 3};
    int out[100];
    SuperSet(arr, out, 3, 0, 0);
    return 0;
}