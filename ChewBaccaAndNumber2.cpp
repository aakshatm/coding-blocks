#include <iostream>
using namespace std;

int main(){
    char ch;
    int digit, invertDigit;
    int ans = 0;
    int index = 1;
    while(ch != '\n'){
        ch = cin.get();
        digit = (int)ch;
        invertDigit = 9 - digit;
        if (invertDigit < digit && index != 1 ){
            digit = invertDigit;
        }
        ans = ans*10 + digit;
    }

    cout << ans;
    return 0;
}
