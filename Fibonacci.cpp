#include <iostream>
using namespace std;

int Fibonacci(int n){

    if (n == 1){
        return 0;
    }
    else if (n == 2){
        return 1;
    }
    else {
        int a = 0, b = 1, c;
        for (int i = 1; i<= n-2; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }

}


int main(){
    int n;
    cin >> n;
    cout << "The "<< n <<"th term of Fibonacci is " << Fibonacci(n);
    return 0;
}
