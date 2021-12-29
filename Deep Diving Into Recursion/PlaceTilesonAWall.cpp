#include <iostream>
using namespace std;

int ways(int n){
    // base case
    if (n <= 3){
        return 1;
    }
    
    // recursive case
    return ways(n - 1) + ways(n - 4);
}

int main()
{
    int n; 
    cin >> n;
    cout << ways(n);
    return 0;
}