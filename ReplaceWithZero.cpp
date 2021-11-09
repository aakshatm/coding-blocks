#include <iostream>
#include <cmath>
using namespace std;

int evaluateLength(long long int n)
{
    int length = 0;
    while (n > 0)
    {
        n = n / 10;
        length++;
    }
    return length;
}

int main()
{
    long long int n;
    cin >> n;
    int index = 0;
    long long newNum = 0;
    int length = evaluateLength(n);
    if (n == 0)
    {
        cout << 5;
    }
    else
    {
        while (n > 0)
        {
            int digit;
            digit = n % 10;
            if (digit == 0)
            {
                digit = 5;
                newNum = newNum + digit * pow(10, index);
            }
            else
            {
                newNum = newNum + digit * pow(10, index);
            }
            index++;
            n = n / 10;
        }

        cout << newNum;
    }

    return 0;
}