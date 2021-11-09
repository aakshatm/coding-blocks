#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int evaluateLength(long long int n){
    int length = 0;
    while (n > 0){
        n = n/10;
        length++;
    }
    return length;
}

int main()
{
    long long int n;
    cin >> n; 
    long long int newNo = 0;
    int index = 0;
    int length = evaluateLength(n);
    while (n > 0){
        int digit;
        digit = n%10;
        
        int ndigit; 
        ndigit = 9-digit;
        if ((index == length - 1 && digit == 9 )|| (ndigit > digit)){
            newNo = newNo + digit*pow(10, index);
        }
        else if (ndigit < digit){
            digit = ndigit;
            newNo = newNo + digit*pow(10, index);
        }
       

        index++;
        n = n / 10;
    }
    cout << newNo;


    return 0;
}