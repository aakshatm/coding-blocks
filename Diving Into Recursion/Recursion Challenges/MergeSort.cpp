#include <iostream>
using namespace std;

void Merge(int *a, int *b, int *c, int s, int e){
    int m = (s+e)/2;
    int i = s;
    int j = s;
    int k = m + 1; 
    while (j <= m and k <=e){
        if (b[j] < c[k]){
            a[i++] = b[j++];
        }
        else{
            a[i++] = c[k++];
        }
    }
    // appending remaining elements
    while (j <= m){
        a[i++] = b[j++];
    }

    while (k <= e){
        a[i++] = c[k++];
    }
}

void MergeSort(int *a, int s, int e){
    // base case
    if (s >=e){
        return;
    }

    // recusive condn
    int b[100000], c[100000];
    
    // dividing the array a into two subarrays
    int m = (s + e)/2;
    for (int i = s; i<=m; i++){
        b[i] = a[i];
    }
    for (int i = m+1; i<=e; i++){
        c[i] = a[i];
    }

    // now sort
    MergeSort(b, s, m);
    MergeSort(c, m+1, e);

    // now merge the sorted arrays
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
    int n; 
    cin >> n;

    int a[n];

    for (int i = 0; i<n; i++){
        cin >> a[i];
    }

    MergeSort(a, 0, n - 1);

    printArray(a, n);


    return 0;
}