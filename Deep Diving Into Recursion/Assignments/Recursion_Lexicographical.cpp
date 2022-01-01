#include<bits/stdc++.h>
using namespace std;
int ct = 0;

bool compare(string s1, string s2){
    if (s1 < s2){
        return true; 
    }
    return false;
}



void printArray(string * arr, int n){
    for (int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void counting(int n, string* arr){
    // base case 
    if (n == -1){
        return;
    }

    // recursive case
    arr[ct++] = to_string(n);
    counting(n-1, arr);
}

int main()
{
  
    string arr[1000];
    int n ;
    cin >> n;
    counting(n, arr);
  
    sort(arr, arr + ct, compare);
    printArray(arr, ct);

    return 0;
}