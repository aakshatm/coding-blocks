#include <iostream>
#include <string>
using namespace std;

int StringToInt(string a, int n){
    // base case    

    if (n == 0){
        return 0;
    }

    // recursive case
    int digit = a[n-1] - '0';
    int smallerAns = StringToInt(a, n - 1);
    return smallerAns*10 + digit;
}

int main()
{
    string s = "1564";
    int n = s.length();
    cout << StringToInt(s, n) + 1;
    return 0;
}