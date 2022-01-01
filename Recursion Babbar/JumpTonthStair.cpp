#include <iostream>
using namespace std;

int ways(int n){
    // base case
    if (n < 0){
        return 0;
    }

    if (n == 0){
        return 1;
    }



    // recursive case
    return ways(n - 1) + ways (n - 2) + ways(n - 3);
}

int main()
{
    int n = 4;
    cout << ways(n);
    return 0;
}