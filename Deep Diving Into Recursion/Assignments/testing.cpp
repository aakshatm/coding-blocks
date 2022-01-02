#include<bits/stdc++.h>
using namespace std;

// function for storing an integer array in a 2d array 

int row = 0;
void store1dinto2d(int a2[100][100], int a1[], int col){
    for (int i = 0; i<col; i++){
        a2[row][i] = a1[i];
    }
    row++;
}

// printing 2d array
void print(int a[100][100], int rows, int cols){
    for (int row = 0; row<rows; row++){
        for (int col = 0; col<cols; col++){
            cout << a[row][col] << " ";
        }
        cout << endl; 
    }
}


int main()
{
    int arr[100][100];
    
    int a1[3] = {1, 2, 3};
    int a2[3] = {4, 5, 6};
    store1dinto2d(arr, a1, 3);
    store1dinto2d(arr, a2, 3);
    print(arr, 2, 3);



    // trying to store an integer arrays in 2d array
    return 0;
}