#include <iostream>
using namespace std;

void arrayInput(int arr[], int n){
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << endl;
    }
    cout << endl;
}




int main(){
    int n;
    cin >> n;
    int arr[n];
    arrayInput(arr, n);
    int revArray[n];
    int i = 0, j = n-1;
    for (int k = 1; k<=n; k++){
        revArray[i] = arr[j];
        i++;
        j--;
    }

    printArray(revArray, n);

    return 0;
}
