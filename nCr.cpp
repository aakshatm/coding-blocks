#include <iostream>
using namespace std;
int factorial(int n);
int nCr(int n, int r);

int main(){
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r);
    return 0;
}

int factorial(int n){
    int product = 1;
    for (int i = 2; i<=n; i++){
        product *= i;
    }

    return product;
}


int nCr (int n , int r){
    return (factorial(n))/(factorial(r)*factorial(n-r));
}

