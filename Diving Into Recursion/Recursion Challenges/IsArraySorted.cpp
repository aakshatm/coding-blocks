#include <iostream>
using namespace std;

bool isArraySorted(int *a, int i, int n){
    // base case
    if (i == n-1){
        return true;
    }

    // recursive case
    bool isSmallerArraySorted = isArraySorted(a, i + 1, n);
    if (isSmallerArraySorted && a[i]<=a[i+1]){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }
    if (isArraySorted(a, 0, n)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}