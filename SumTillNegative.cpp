#include <iostream>
using namespace std;

int main(){
    int input, sum = 0;

    while (sum >= 0){
        cin >> input;
        sum += input;
        if (sum >= 0){
            cout << input << endl;
        }
    }
    return 0;
}
