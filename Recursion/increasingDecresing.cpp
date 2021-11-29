#include <iostream>
using namespace std;

// priniting decreasing nos

void printDec(int n){
    // base case
    if (n == 0){
        return;
    }

    // recursvie condn
    cout << n << " ";
    printDec(n - 1);
}

// print increasing order

void printInc(int n){
    // base case
    if (n == 0){
        return;
    }
    // recursive relation
    printInc(n-1);
    cout << n << " ";
}

int main()
{
    int n = 10;
    printInc(n);
    return 0;
}