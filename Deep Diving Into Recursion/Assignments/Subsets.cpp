#include <bits/stdc++.h>
using namespace std;

void printArray(int * arr, int n){
    for (int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool sumOfArray(int* a, int n, int target){
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum += a[i];
    }
    if (sum == target){
        return true;
    }
    return false;
}

void Subset(int* input, int* output, int n, int i, int j,int k){
    // base case
    if (i == n){
        if (sumOfArray(output, j, k)){
            printArray(output, j);
        }
        return;
    }


        
    // recusive case
    // nhi lena hai 
    Subset(input, output, n, i+1, j, k);

    // lena hai 
    output[j] = input[i];
    Subset(input, output, n, i+1, j+1, k);
}

int main()
{   
    int n;
    cin >> n;

    
    int arr[n];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int output[n];
    Subset(arr, output, n, 0, 0, target);
    return 0;
}