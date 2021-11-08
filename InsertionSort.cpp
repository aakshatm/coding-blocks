#include <iostream>
using namespace std;
// 5 3 1 2 4
void insertionSort(int arr[], int n){
    int j;
    for (int i = 1; i<n ; i++){
        int pickedUpCard = arr[i];
        for ( j = i - 1; j>=0 and arr[j]>pickedUpCard; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = pickedUpCard;
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {5, 3, 1, 2, 4, 2 ,1 , 283};
    int n = 8;
    printArray(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
