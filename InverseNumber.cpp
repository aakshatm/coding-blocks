#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int no;
    cin >> no;
    int newNum = 0;
    int oridinalIndex = 1,index = 1, digit;
    while(no > 0){
        index = oridinalIndex;
        digit = no % 10;

        swap(index, digit);

        newNum = newNum + digit*pow(10, index - 1);
        
        no = no /10;
        oridinalIndex++; 
    }

    cout << newNum;
    return 0;
}