#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Upper Half

    for (int row = 0; row <=(n/2); row++){
        // print no. of spaces
        for (int col = 0; col<(n-2*row-1); col ++){
            cout << "  ";
        }

        //print numbers
        for (int col = (row+1); col>0; col --){
            cout << col << " ";
        }

        // print no. of spaces again
        for (int col = 0; col<(2*row-1); col ++){
            cout << "  ";
        }

        // print numbers
        if (row>0){
            for (int col = 1; col <= row+1; col ++)
                cout << col << " ";
        }

        cout << endl;
    }



    // Lower Half  : make the mirror image of upper half
   for (int row = (n/2-1); row >=0; row--){
        for (int col = 0; col<(n-2*row-1); col ++){
            cout << "  ";
        }

        for (int col = (row+1); col>0; col --){
            cout << col << " ";
        }

        for (int col = 0; col<(2*row-1); col ++){
            cout << "  ";
        }

        if (row>0){
            for (int col = 1; col <= row+1; col ++)
                cout << col << " ";
        }

        cout << endl;
    }


    return 0;
}
