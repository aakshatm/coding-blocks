#include <iostream>
using namespace std;

int factorial(int n){
    int result = 1;
    for (int i = 2; i<=n; i++){
        result *= i;
    }
    return result;
}

int choose(int n, int r){
    int nfact = factorial(n);
    int rfact = factorial(r);
    int n_rfact = factorial(n-r);
    int result = nfact/(rfact*n_rfact);
    return result;

}


int main()
{
    int n;
    cin >> n;
    int row, col;
    for (row = 0; row<n; row++){
        int spaces = n-1-row;
        for(col = 1; col<=spaces; col++){
            cout << "  ";
        }
        
        for (col = 0; col<=row; col++){
            cout << choose(row, col) << " "<<  "  ";
        }

        cout << endl;
    }
    return 0;
}