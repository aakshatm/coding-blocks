#include <iostream>
using namespace std;

bool CarWillRun(int n){
    int oddSum=0, evenSum=0;
    int digit;

    while (n>0){
        digit = n % 10;
        if (digit % 2 != 0){
            oddSum += digit;
        }
        else{
            evenSum += digit;
        }
        n = n/10;
    }

    if (evenSum % 4 == 0 || oddSum % 3 == 0){
        return true;
    }
    return false;

}



int main(){
    int noOfCars;
    cin >> noOfCars;
    for (int i = 1; i<=noOfCars; i++){
        int n;
        cin >> n;
        if (CarWillRun(n)){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
