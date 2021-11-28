#include <iostream>
using namespace std;

int main()
{
    int a[] ={3, 3, 3, 1, 2, 3, 2, 2 ,1, 1};
    int n = sizeof(a)/sizeof(int);
    int arr[64] = {0};

    int mask = 1;
    int j = 0;

    while (j < 64){
        for (int i = 0; i<n; i++){
            if ((a[i] & mask)>0){
                arr[j] +=1;
            }
        }
        mask = (mask << 1);
        j++;
    }

    // taking modulus of every element of arr by 3
    for (int i = 0; i<64; i++){
        arr[i] = arr[i] % 3;
    }

    // now the number is in binary sequence
    for (int i = 63; i>=0; i--){
        cout << arr[i];
    }
    cout << endl;

    //  conerting binary to decimal 
    int ans = 0;
    for(int i = 0; i<64; i++){
        ans += arr[i]*(1<<i);
    }

    cout << ans;


    
    return 0;
}