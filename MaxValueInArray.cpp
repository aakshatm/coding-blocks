#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    // Taking input of array
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int max_value = INT_MIN;

    for (int i = 0; i<n; i++){
        if (arr[i] > max_value){
            max_value = arr[i];
        }
    }

    cout << max_value;

    return 0;
}
