#include <iostream>
using namespace std;

int largest(int *a, int n){
    int largest = a[0];
    for (int i = 0; i<n; i++){
        if (a[i] > largest){
            largest = a[i];
        }
    }
    return largest;
}

int main()
{
    int a[] = {1, 3, 2, 1283, 1280};
    int n = sizeof(a)/sizeof(int);
    cout << largest(a, n) << endl;
    return 0;
}