#include <iostream>
using namespace std;

int revNumber(int n){
    int newNum = 0;
    while (n > 0){
        newNum = newNum*10 + n%10;
        n = n/10;
    }
    return newNum;
}

int main(){
    int n;
    cin >> n;
    n = revNumber(n);
    int digit, invertDigit, newNum = 0, index = 1;
    while (n > 0){
        digit = n % 10;
        invertDigit = 9 - digit;
        if (digit == 9 && index == 1){

        }
        else if (invertDigit < digit ){
            digit = invertDigit;
        }
        newNum = newNum*10 + digit;
        n = n/10;
        index ++;
    }

    cout << newNum;
    return 0;
}
