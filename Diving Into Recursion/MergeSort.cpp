#include <iostream>
using namespace std;

void Merge(int *a, int *b, int *c, int s, int e){
    int mid = (s+e)/2;
    int i = s, j = s, k = mid + 1;
    while (j <= mid &&  k <= e){
        if (b[j] < c[k]){
            a[i++] = b[j++];
        }
        else{
            a[i++] = c[k++];
        }
    }

    while (j <= mid){
        a[i++] = b[j++];
    }

    while (k <= e){
        a[i++] = c[k++];
    }
}

void MergeSort(int *a, int s, int e){
    // base case
    if (s>=e){
        return;
    }

    // recursive condn
    int mid = (s+e)/2;

    // 1. Divide
    int b[100], c[100];
    for (int i = s; i<=mid; i++){
        b[i] = a[i];
    }
    for (int i = mid + 1; i<=e; i++){
        c[i] = a[i];
    }

    // 2. Sort
    MergeSort(b, s, mid);
    MergeSort(c, mid + 1, e);

    // 3. Merge
    Merge(a, b, c, s, e);
}

void printArray(int *a, int n)
{
    for (int i = 0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}


int main()
{
    int a[] = {2, 1, 52, 12, 12, 11};
    int n = sizeof(a)/sizeof(int);
    printArray(a, n);
    cout << endl;
    MergeSort(a, 0, n-1);

  

    // print a;
    printArray(a, n);

    return 0;
}