#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int row, col, no = n;
    // Upper Half
    for (row = 1; row<=n; row = row + 1){

        for (col = 1; col<= row - 1; col = col + 1){
            cout << ' '<< '\t';
        }



        for (col = 1; col<= n+2-row ; col = col + 1){
            cout << no << '\t';
            no = no - 1;
        }



        no = no + 1;
        for (col = 1; col<= n+1-row; col = col + 1){
            no = no + 1;
            cout << no << '\t';
        }
        no = no -1;
        cout << endl;
    }

    // Middle Section
    for (col = 1; col <=n ; col = col + 1){
        cout << ' '<< '\t';
    }

    cout << '0' << '\t' << endl;

    // Bottom Part
    for (row = 1; row <= n; row = row + 1){
        for (col =1 ; col<=n - row; col = col + 1){
            cout << ' '<< '\t';
        }
        // printing row + 1 times numbers in decresing order starting from row no
        no = row;
        for (col = 1; col<=row + 1; col = col + 1){
            cout << no << '\t';
            no = no - 1;
        }
        no = no + 1;

        for (col = 1; col <= row ; col = col + 1){
            no = no + 1;
            cout << no << '\t';
        }
        cout << endl;
    }

    return 0;
}
