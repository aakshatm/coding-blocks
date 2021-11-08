#include <iostream>
using namespace std;

int main(){
    int n = 100;
    int i;
    for (i = 1; i<=n; i=i+1){
        if (i % 3 == 0  && i % 5 == 0){
            cout << "fizzBuzz" << endl;
        }
        else if (i % 3 == 0){
            cout << "fizz" << endl;
        }
        else if (i % 5 == 0){
            cout << "Buzz" << endl;
        }
        else {
            cout << i << endl;
        }
    }
    return 0;
}
