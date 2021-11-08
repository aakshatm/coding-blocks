#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int row, col, no;

    no = n;
    // Upper Part
    for (row = 1; row<=n; row = row + 1){
        for (col = 1; col<=row; col = col + 1){
            cout << no << ' ';
            no = no - 1;
        }
        for (col = 1; col <= (4*(n - row)+2); col = col + 1){
            cout << ' ';
        }
        no = n+1-row;

        for (col = 1; col<=row; col = col +1){
            cout << no << ' ';
            no = no + 1;
        }
        no = n;
        cout << endl;
    }



    // Middle Part
    no = n;
    for (col = 1; col<=n; col = col + 1 ){
        cout << no << ' ';
        no = no - 1;
    }

    cout << 0 << ' ';

    no = 1;
    for (col = 1; col<=n; col = col + 1 ){
        cout << no << ' ';
        no = no + 1;
    }

    cout << endl;


    // Lower Part

    for (row = 1; row <= n; row = row + 1){
        no = n;
        for (col = 1; col<=(n+1-row); col = col + 1){
            cout << no << ' ';
            no = no - 1;
        }

        for (col = 1; col<=(4*row - 2); col = col + 1){
            cout << ' ';
        }

        no = row;

        for (col = 1; col <=(n+1-row); col = col + 1){
            cout << no << ' ';
            no = no + 1;
        }
        cout << endl;
    }
    return 0;
}
