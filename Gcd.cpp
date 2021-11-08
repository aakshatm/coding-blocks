#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int divisor, maxDivisor;
    maxDivisor = 1;
    if (n1<=n2){
        for (divisor = 1; divisor <=n1; divisor++){
            if (n1 % divisor == 0 && n2 % divisor == 0){
                if (maxDivisor<divisor){
                    maxDivisor = divisor;
                }
            }
        }
    }

    else {
        for (divisor = 1; divisor <=n2; divisor++){
            if (n1 % divisor == 0 && n2 % divisor == 0){
                if (maxDivisor<divisor){
                    maxDivisor = divisor;
                }
            }
        }
    }


    cout << maxDivisor;
    return 0;
}
