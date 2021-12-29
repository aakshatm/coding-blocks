#include <iostream>
using namespace std;

int Partition(int *a, int s, int e){
    int i = s - 1;
    for (int j = s; j<e; j++){
        if (a[j] <= a[e]){
            // send to partition 1
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[e]);
    return i + 1;

}

void QuickSort(int *a, int s, int e){
    // base case
    if (s>=e){
        return;
    }
    // recusive condn
    int indx = Partition(a, s, e);

    QuickSort(a, s, indx - 1);
    QuickSort(a, indx+1, e); 
}

void printArray(int *a, int n)
{
    for (int i = 0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {2, 1, 52, 12, 12, 11};
    int n = sizeof(a)/sizeof(int);
    QuickSort(a, 0, n -1);
    printArray(a, n);
    return 0;
}