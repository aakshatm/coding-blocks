#include <iostream>
using namespace std;

int reverseNumber(int n){
    int revNum = 0;
    while (n>0){
        revNum = revNum * 10 + n % 10;
        n = n/10;
    }
    return revNum;
}

int revReplaceZeroWithFive(int n){
    int result = 0;
    int digit;
    while (n > 0){
        digit = n%10;
        if (digit == 0){
            digit = 5;
        }
        result = result * 10 + digit;
        n = n / 10 ;
    }

    return result;
}

int main(){
    int n;
    cin >> n;
    cout << reverseNumber(revReplaceZeroWithFive(n));

    return 0;
}
