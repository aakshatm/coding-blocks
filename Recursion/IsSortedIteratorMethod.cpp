#include <iostream>
using namespace std;

bool isSorted(int *a, int n, int i){
    // base case
    if (i == n-1){
        return true;
    }

    // recursive relation
    bool isSmallerSorted = isSorted(a, n, i+1);

    if (isSmallerSorted && a[i]<a[i+1]){
        return true;
    }
    else{
        return false;
    }
}       

int main()
{
    int a[] = {1, 4, 6, 8, 9, 10};
    int n = sizeof(a)/sizeof(int);

    cout << isSorted(a, n, 0);
    return 0;
}