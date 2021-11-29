#include <iostream>
using namespace std;

// iteartive method 
bool isSorted(int a[], int n){
    bool isSorted = true;
    for (int i = 0; i<=n-2; i++){
        if (a[i+1]<a[i]){
            isSorted = false;
            break;
        }
    }

    return isSorted;
}


// recursive method
bool isSortedRecursive(int *a, int n){
    // base case
    if (n==0 || n == 1){
        return true;
    }
    // recursive relation
    bool isSmallArraySorted = isSortedRecursive(a+1, n-1);

    if (isSmallArraySorted && a[0] < a[1]){
        return true; 
    }
    else {
        return false;
    }
}


int main()
{
    int a[] = {1, 4, 2, 8, 9, 10};
    int n = sizeof(a)/sizeof(int);

    cout << isSortedRecursive(a, n);
    return 0;
}