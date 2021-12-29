#include <iostream>
using namespace std;

int nthTriangle(int n){
    // base case
    if (n == 1){
        return 1; 
    }
    // recursive case
    return n + nthTriangle(n - 1);
}

int main()
{
    int n; 
    cin >> n;
    cout << nthTriangle(n);
    return 0;
}