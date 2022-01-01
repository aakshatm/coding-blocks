#include <iostream>
#include <string>
using namespace std;

// mapping 
string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void print(int n){
    // base case
    if (n == 0){
        return;
    }

    // recursive relation
    print(n/10);
    int digit = n % 10;
    cout << arr[digit] << " ";
}

int main()
{
    int n = 404;
    print(n);
    return 0;
}