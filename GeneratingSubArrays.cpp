#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    int i, j, k;
    for (i = 0; i<n; i++){
        for(j = i; j<n; j++){
            for (k = i; k<=j; k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
