#include<bits/stdc++.h>
using namespace std;

int sumOf(int *a, int n){
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum += a[i];
    }
    return sum; 
}

void printArray(int *a, int n){
    for (int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
}

int ct = 0;
void splitArray(int *input, int *output1, int *output2, int i, int j1, int j2, int n){
    
    
    // base case

    if (i == n){
        if (sumOf(output1, j1) == sumOf(output2, j2)){
            printArray(output1, j1);
            cout << "and ";
            printArray(output2, j2);
            cout << endl;
            ct++;
        }
        return;
    }

    // recursive case
    // Input in 1 ignore for 2
    output1[j1] = input[i];
    splitArray(input, output1, output2, i+1, j1+1, j2, n);

    // Input in 2 ignore for 1
    output2[j2] = input[i];
    splitArray(input, output1, output2, i+1, j1, j2+1, n);
}

int main()
{
    int n;
    cin >> n; 
    int a[n];
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }   

    int output1[n];
    int output2[n];

    splitArray(a, output1, output2, 0, 0, 0, n);
    cout << ct; 
    return 0;
}