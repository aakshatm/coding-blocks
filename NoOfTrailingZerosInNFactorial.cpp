#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int noOfFactorsOf5 = 0;
    int index = 1;
    while (n/pow(5, index)>0){
        noOfFactorsOf5 = noOfFactorsOf5 + n/pow(5, index);
        index += 1;
    }
    int &noofTrailingZeros = noOfFactorsOf5;
    cout << noofTrailingZeros;

    return 0;
}
