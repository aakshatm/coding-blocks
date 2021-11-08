#include <iostream>
using namespace std;

void arrayInput(int arr[], int n){
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
}

int linearSearch(int arr[], int n, int key){
    for (int i = 0; i<n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, m;
    cin >> n;
    int arr[n];
    arrayInput(arr, n);
    cin >> m;
    cout << linearSearch(arr, n, m);
    return 0;
}
