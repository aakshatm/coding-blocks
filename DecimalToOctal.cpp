#include <iostream>
using namespace std;

int main(){
    int decimalNo;
    cin >> decimalNo;
    int Revoctal= 0;
    int digit;
    int remainder;
    while (decimalNo > 0){
        remainder = decimalNo % 8;
        Revoctal = Revoctal*10 + remainder;
        decimalNo = decimalNo / 8;
    }

    // Now reverse Revoctal to get octal
    int octal=0;

    while (Revoctal>0){
        octal = octal*10 + Revoctal % 10 ;
        Revoctal = Revoctal / 10;
    }


    cout << octal;
    return 0;
}
