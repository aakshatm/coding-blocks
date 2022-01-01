#include <iostream>
using namespace std;

bool isSorted(int* arr, int i, int n){
    // base condn
    if (i == n){
        return true;
    }

    if (arr[i] < arr[i-1]){
        return false;
    }


    // recursive call
    isSorted(arr, i+1, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << isSorted(arr, 1, 5);
    return 0;
}