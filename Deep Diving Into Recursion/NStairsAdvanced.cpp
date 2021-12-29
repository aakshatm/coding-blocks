#include <iostream>
using namespace std;

int stairs(int n, int k){
    // base case
    if (n == 0){
        return 1;
    }

    if (n < 0){
        return 0;
    }
    // recurance relation

    int ways = 0;
    for (int i = 1; i<=k; i++){
        ways = ways + stairs(n-i, k);
    }

    return ways;
}

int main()
{
    int n = 4;
    cout << stairs(n, 4) << endl;
    return 0;
}