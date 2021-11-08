#include <iostream>
using namespace std;

int main(){
    int n, input;
    cin >> n;
    int i;
    int uniqueNumber = 0; // initialized with zero because zero XOR (number) gives the number itself
    for (i = 1; i<=n; i++){
        cin >> input;
        uniqueNumber = input ^ uniqueNumber; // a ^ a gives zero; // and XOR is associative
    }

    cout <<"Unique number is " << uniqueNumber;
    return 0;
}
