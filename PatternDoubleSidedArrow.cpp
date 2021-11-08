#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;
    int row, col;

    // Upper Half (in case n = 7 first 4 lines)
    for(row = 1; row<=(n+1)/2; row ++){
        //print spaces
        for (col = 1; col <= 4*(n-row)-12; col ++){
            cout << ' ';
        }
        // print numbers in decreasing order

        for (col = row; col>=1; col --){
            cout << col << ' ';
        }

        // print spaces

        for (col = 1; col<=(4*row - 6); col++){
            cout << ' ';
        }


        // print numbers in increasing order
        if (row != 1){
            for (col = 1; col<=row; col ++){
            cout << col << ' ';
        }
        }

        cout << endl;
    }

    // Lower half (reflection of upper half)


    for (row = n/2; row>=1; row --){
        //print spaces
        for (col = 1; col <= 4*(n-row)-12; col ++){
            cout << ' ';
        }
        // print numbers in decreasing order

        for (col = row; col>=1; col --){
            cout << col << ' ';
        }

        // print spaces

        for (col = 1; col<=(4*row - 6); col++){
            cout << ' ';
        }


        // print numbers in increasing order
        if (row != 1){
            for (col = 1; col<=row; col ++){
            cout << col << ' ';
        }
        }

        cout << endl;

    }

    return 0;
}

