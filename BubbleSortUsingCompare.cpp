#include <iostream>
using namespace std;
bool compare(int a, int b){
    return a<b;
}
void printArray(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n, bool(&mycompare)(int a, int b)){
    for (int i = 0; i<n; i++){
        for(int j = 0; j<n-1-i; j++){
            if (mycompare(arr[j], arr[j+1])){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {1, 100,72, 3, 4};
    int n = sizeof(arr)/sizeof(int);
    // before sorting
    printArray(arr, n);

    // bubble sort
    // bubbleSort(arr, n, compare);

    //after sorting
    // printArray(arr, n);
    return 0;
}
