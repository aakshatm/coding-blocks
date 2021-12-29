#include <iostream>
using namespace std;

int Power(int a, int n){
    // base case
    if (n == 0){
        return 1; 
    }

    // recursive case;
    return a*Power(a, n-1);
}

int main()
{
    int a = 2;
    int n = 4;
    cout << Power(2, 4);
    return 0;
}