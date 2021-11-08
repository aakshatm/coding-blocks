#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n){
    int noOfDigits = 0;
    int sum = 0; // sum of digits raise to the power of of total no of digits
    int no = n; // creating another no to conserve the value of n which will be lost while finding the no of digits
    int checkNo = n; // conserving the n to compare at last
    while (n>0){
        n = n/10;
        noOfDigits++;
    }

    while(no>0){
        sum = sum + pow(no%10, noOfDigits);
        no = no / 10;
    }

    if (sum == checkNo){
        return true;
    }
    return false;



}

int main(){
    int n;
    cin >> n;
    if (isArmstrong(n)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}
