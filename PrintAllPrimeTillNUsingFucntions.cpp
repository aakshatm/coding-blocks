#include <iostream>
using namespace std;

bool isPrime(int n);
void PrintPrime(int n);




int main(){
    int n;
    cin >> n;
    PrintPrime(n);
    return 0;

}


bool isPrime(int n){
    bool isprime = true;
    for (int i = 2; i<n; i++){
        if (n % i == 0){
            isprime = false;
            break;
        }
    }
    return isprime;
}


void PrintPrime(int n){
    for (int i = 2; i<=n; i++){
        if (isPrime(i)){
            cout << i << endl;
        }
    }
}
