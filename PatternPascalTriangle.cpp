#include <iostream>
using namespace std;

int fact(int n){
    if (n == 1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}

int choose(int n , int r){
    return fact(n)/(fact(r)*fact(n-r));
}



int main(){
    int n ;
    cin >> n;
    int row, col;
    for (row = 0; row<n; row++){
        for (col = 0; col<=row; col ++){
            cout << choose(row, col)<< ' ';
        }
        cout << endl;
    }
    return 0;
}
