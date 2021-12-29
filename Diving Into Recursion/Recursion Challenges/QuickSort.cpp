#include <iostream>
using namespace std;

int Partition(int *a, int s, int e){
    int i = s - 1; // partition 1 is from [s, i]
    // parition is from [i+1, j - 1]

    for(int j = s; j<e; j++){
        if (a[j]<=a[e]){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[e]);
    return i + 1;

}

void QuickSort(int *a, int s, int e){
    // base case
    if (s >= e){
        return;
    }

    // recursive case
    int indx = Partition(a, s, e);
    QuickSort(a, s, indx - 1);
    QuickSort(a, indx + 1, e);
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

    QuickSort(a, 0, n - 1);

    printArray(a, n);
    return 0;
}