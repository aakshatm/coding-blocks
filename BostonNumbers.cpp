#include <iostream>
using namespace std;

bool isPrime(int n){
    bool isPrime = 1;
    for (int i = 2; i<n; i++){
        if (n % i == 0){
            isPrime = 0;
        }
    }
    return isPrime;
}

int sumOfDigits(int n){
    int sum = 0;
    while (n > 0){
        sum = sum + n%10;
        n = n /10;
    }
    return sum;
}

int sumOfPrimeFactors(int n){
    int sumPrime = 0;
    int factor = 2;
    while (n != 1){
        while (n % factor == 0 && isPrime(factor)){
            sumPrime = sumPrime + factor;
            n = n / factor;
        }
        factor ++;
    }
    return sumPrime;
}

bool isBoston(int n){
    if (sumOfDigits(n) == sumOfPrimeFactors(n)){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    cout << isBoston(n);
    return 0;
}
