#include <iostream>
using namespace std;

bool isSorted(int* arr, int n, int i){
    // base case
    if (i == n){
        return true;
    }

    // recursive reln 
    if ((arr[i] < arr[i+1]) && (isSorted(arr, n, i+1))){
        return true; 
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 2};
    cout << isSorted(arr, 6, 0);
    return 0;
}