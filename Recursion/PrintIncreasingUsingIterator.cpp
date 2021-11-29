#include <iostream>
using namespace std;

void printInc(int i, int n){
    // base case
    if (i == n+1){
        return;
    }

    // recursive relation
    cout << i << " ";
    printInc(i+1, n);
}

int main()
{
    int n = 7;
    printInc(1, n);
    return 0;
}