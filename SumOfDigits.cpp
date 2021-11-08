#include <iostream>
using namespace std;

int main(){
    int n, digit;
    cin >> n;  // this is how n is initialized


    int sum = 0;
    while (n>0){
        // digit = n % 10;
        sum += n%10;
        n = n/10; // Updation of n
    }
    cout << sum ;
    return 0;
}
