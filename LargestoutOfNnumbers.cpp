#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n , number, max;
    // max = -2147483648; // -2^31
    max = INT_MIN;
    cin >> n;
    int i = 1;
    while (i<=n){
        cin >> number;
        if (number > max ){
            max = number;
        }
        i= i+1;
    }

    cout << "Largest Number: " <<max;



    return 0;
}
