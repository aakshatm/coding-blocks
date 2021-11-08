#include <iostream>
using namespace std;

int main(){
    int n, digit;
    cin >> n >> digit;
    int cur_digit;
    int count = 0;
    while (n>0){
        cur_digit = n % 10;
        if (cur_digit == digit){
            count++;
        }
        n /= 10;
    }
    cout << count;
    return 0;
}
