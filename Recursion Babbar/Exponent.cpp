#include <iostream>
using namespace std;

int power(int n, int k){
    // base case
    if (k==0){
        return 1; 
    }

    // recursive condn 
    return n * power(n, k - 1);
}

int main()
{
    int n = 2; 
    int k = 3; 
    cout << power(n, k);

    return 0;
}