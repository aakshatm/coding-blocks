#include <iostream>
using namespace std;

int trailingZeroes(int n){
    int ans = 0;
    for (int d = 5; n/d>=1; d=d*5){
        // no of trailing zeros is equal to the number of factors of 5 in n!
        // which is given by
        // [n/5] + [n/5^2] + [n/5^3] + .... till [n/d] >= 1;
        ans += n/d;
    }
    return ans;
}



int main(){
    int n;
    cin >> n;
    cout << trailingZeroes(n);
    return 0;
}
