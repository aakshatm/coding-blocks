#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    int i, j;
    int count = 0;
    for (i = 2; i<=n; i=i+1){
        for (j = 2; j<i; j= j + 1){
            if (i % j == 0){
                break;
            }
        }
        if (j == i){
            cout << i << " ";
            count = count + 1;
        }

    }

    cout << endl << "No of prime numbers uptill "<< n << " is "<< count;
    return 0;
}
