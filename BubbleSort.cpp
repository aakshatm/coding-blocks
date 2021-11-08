#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    int temp;
    for (int i = 1; i<=n-1; i++){ // heaviest element gets sorted after each iteration
        for(int j = 0; j<n-i; j++){
            if (arr[j] > arr[j+1]){
                // swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    bubbleSort(arr, n);
    cout << "After Sorting: "<< endl;
    printArray(arr, n);
    return 0;
}
