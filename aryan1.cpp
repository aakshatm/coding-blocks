#include <iostream>
#include <cmath>
using namespace std;

long long int evaluateLength(long long int n){
    int l = 0;
    while (n > 0){
        l++;
        n= n/10;
    }
    return l;
}

int main()
{
    long long int n; 
    cin >> n;


    int length = evaluateLength(n);
 

    long long int newNum = n;



    for (int i = 1; i<=length; i++){
        int digit = n % 10;
        if (i == length && digit == 9){

        }
        else{
            int newDigit = 9 - digit;
            if (newDigit < digit){
                newNum = newNum - digit*pow(10, i-1) + newDigit*pow(10, i-1);
            }
        }

        n = n /10;
    }

    cout << newNum;

    return 0;
}