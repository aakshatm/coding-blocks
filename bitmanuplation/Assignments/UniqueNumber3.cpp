#include <iostream>
using namespace std;

int main()
{
    int n; 
    cin >> n; 
    int a[n];
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }

    int arr[32] = {0};
    // adding all the bits of all the numbers;

    
    for (int i = 0; i<n; i++){
        int no = a[i];
        int pos = 0;
        while (no > 0){
            if ((no & 1) == 1){
                arr[pos]++;
            }
            no = (no >> 1);
            pos++;
        }
    }

    // taking the modulus by 3
    for (int i = 0; i<32; i++){
        arr[i] = arr[i] % 3; 
    }

    // printing the bit pattern 
    // for (int i = 31; i>=0; i--){
    //     cout << arr[i];
    // }

    // converting the bit pattern into int 
    int result = 0;
    for (int i = 0; i<32; i++){
        result = result + arr[i]*(1<<i);
    }

    cout << result;
    return 0;
}