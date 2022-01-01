#include <iostream>
using namespace std;

// power of 2
int power(int k){
    // base case
    if (k == 0){
        return 1; 
    }

    // recursive relation 
    int chotaAns = power(k/2);
    if (k&1==1){ // if odd
        return 2*chotaAns*chotaAns;
    }
    else{
        return chotaAns*chotaAns;
    }
}

int main()
{
    int k = 3;
    cout << power(k);
    return 0;
}