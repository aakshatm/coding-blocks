#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int index = 0;
    int digit;
    int decimalNo = 0;
    while (n>0){
        digit = n % 10;
        decimalNo += digit*pow(2, index);
        index += 1;
        n /= 10;
    }
    cout << decimalNo;
    return 0;
}
