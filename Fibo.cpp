#include <iostream>
using namespace std;

int fact(int n){
    if (n == 1 || n == 0){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int a ;
    cin >> a;
    cout << "Factorial of "<< a << " is "<< fact(a);
    return 0;
}
