#include <iostream>
using namespace std;

void BubbleSort(int *a, int n){
    for (int i = 1; i<=n-1; i++){
        for (int j = 0; j<=n-1-i; j++){
            if (a[j] > a[j+1]){
            swap(a[j], a[j+1]);
            }
        }
    }
}

void BubbleSortRec(int *a, int n, int i){
    // base condition
    if (i == n - 1){
        return;
    }

    // recursive condition
    for (int j = 0; j<=n-2-i; j++){
        if (a[j] > a[j+1]){
            swap(a[j], a[j+1]);
        }
    }

    BubbleSortRec(a, n, i+1);
}

int main()
{
    int a[] = {1, 32, 12, 82, 1, 12};
    int n = sizeof(a)/sizeof(int);
    BubbleSortRec(a, n, 0);


    // printing the array after sorting
    for (int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}