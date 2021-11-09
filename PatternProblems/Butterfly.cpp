#include <iostream>
using namespace std;

int main()
{   
    int n; 
    cin >> n;
    int row, col;
    //Upper pattern

    for (row = 1; row<= n; row++){
        // Print star
        for (col = 1; col<=row; col++){
            cout << "* ";
        }
    
        // Print space
        for (col = 1; col<= (2*(n - row)); col ++){
            cout << "  ";
        }

        // Print star
        for (col = 1; col<=row; col++){
            cout << "* ";
        }

        cout << endl;

    }


    // Lower Pattern

    for (row = n; row>= 1; row--){
        // Print star
        for (col = 1; col<=row; col++){
            cout << "* ";
        }
    
        // Print space
        for (col = 1; col<= (2*(n - row)); col ++){
            cout << "  ";
        }

        // Print star
        for (col = 1; col<=row; col++){
            cout << "* ";
        }

        cout << endl;

    }

    return 0;
}