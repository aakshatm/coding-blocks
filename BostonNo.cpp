#include <iostream>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;
    while (n > 0){
        int digit;
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

bool isprime(int n){
    for (int i = 2; i<n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int sumOfPrimeFactors(int n){
    int sum = 0;  
    int potentialFactors = 2;  
    while (n!=1){
        while (n % potentialFactors == 0 && isprime(potentialFactors)){
            sum += potentialFactors;
            n = n/potentialFactors;
        }
        potentialFactors++;
    }
    return sum;
}

int main()
{   
    unsigned int n;
    cin >> n;
    if (sumOfDigits(n) == sumOfPrimeFactors(n)){
        cout << 1;
    } 
    else{
        cout << 0;
    }
    
    
    return 0;
}