#include <bits/stdc++.h>
using namespace std;

int row = 0;
void store1dinto2d(int a2[1000][1000], int a1[], int col){
    for (int i = 0; i<col; i++){
        a2[row][i] = a1[i];
    }
    row++;
}



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

int arr2[1000][1000];
void Subset(int* input, int* output, int n, int i, int j,int k){
    // base case
    if (i == n){
        if (sumOfArray(output, j, k)){
            store1dinto2d(arr2, output, j);
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

// for 1d array
int findlen(int *a){
    int i = 0; 
    while (a[i]!=0){
        i++;
    }
    return i;
}

// for 2d array
int findlen(int a2[1000][1000], int row){
    int i = 0; 
    while (a2[row][i]!=0){
        i++;
    }
    return i;
}

void print(int a[1000][1000], int rows){
    for (int row = 0; row<rows; row++){
        int len = findlen(a, row);
        for (int col = len - 1; col>=0; col--){
            cout << a[row][col] << " ";
        }
        cout << endl; 
    }
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

    print(arr2, row);
    return 0;
}