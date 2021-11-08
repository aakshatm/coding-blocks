#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int EvenSum= 0, OddSum=0;
    int position = 1;
    int digit;
    while (n>0){
        digit = n%10;
        if (position % 2 == 0){
            EvenSum += digit;
        }
        else {
            OddSum += digit;
        }
        position +=1;
        n /= 10;
    }
    cout << OddSum << endl << EvenSum;
    return 0;
}
