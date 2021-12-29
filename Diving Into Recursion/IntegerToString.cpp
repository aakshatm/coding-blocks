#include <iostream>
using namespace std;

string a[10] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};

void IntegerToString(int n){
    // base case
    if (n == 0){
        return;
    }

    // recursive condn
    int digit = n % 10;
    IntegerToString(n/10);
    cout << a[digit] << " ";
}

int main()
{
    int n = 2014;
    IntegerToString(n);
    return 0;
}