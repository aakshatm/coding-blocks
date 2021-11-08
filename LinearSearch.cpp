#include <iostream>
using namespace std;

int linearSearch(int arr[], int key, int n){
    for (int i = 0; i<n; i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}




int main(){
    int arr[] = {1, 4, 8 , 123, 28};
    int n = 5;
    int key;
    cin >> key;
    cout << "index at which "<< key <<" is present in array is "<< linearSearch(arr, key, n);

    return 0;
}
