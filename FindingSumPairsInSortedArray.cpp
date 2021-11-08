#include <iostream>
using namespace std;
void formatPrint(int a, int b){
    cout << '(' << a << ", " << b << ')' << endl;
}

int main(){
    int arr[] = {1, 4, 5, 6, 8, 10};
    int sum = 11;
    int n = sizeof(arr)/sizeof(int);
    int i = 0, j = n - 1;
    while (j>i){
        if (arr[i] + arr[j] == sum){
            formatPrint(arr[i] , arr[j]);
            i++;
            j--;
        }
        else if (arr[i] + arr[j] > sum){
            j--;
        }
        else{
            i++;
        }
    }

    return 0;
}
