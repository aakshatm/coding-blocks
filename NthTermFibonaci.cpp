#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b, c;
    a = 0;
    b = 1;
    if (n == 0){
        cout << a;
    }
    else if (n == 1){
        cout << b;
    }
    else {
        for (int i = 1; i<=n-1; i++){
            c = a + b;
            a = b;
            b = c;
        }
        cout << c;


    }
    return 0;
}
