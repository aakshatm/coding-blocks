#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int minIndex, temp;
    for (int i = 0; i<=n-2; i++){
        minIndex = i;
        for (int j = i + 1; j<n; j++){
            if (arr[minIndex] > arr[j]){
                minIndex = j;
            }
            }
        }
        // Swap minIndex and i the index values
        // temp = arr[i];
        // arr[i] = arr[minIndex];
        // arr[minIndex] = temp;
        swap(arr[i], arr[minIndex]);
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    cout << "Before Sorting: "<< endl;
    printArray(arr, n);
    selectionSort(arr, n);
    cout << "After Sorting: "<< endl;
    printArray(arr, n);
    return 0;
}
