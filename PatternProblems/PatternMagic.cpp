#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int n;
    cin >> n;
    for (row = n; row>=1; row--){
        if (row == n){
            int stars = 2*n - 1;
            for (col = 1; col<=stars; col++){
                cout << "*";
            }
        }
        else{
            int stars = row;
            for (col = 1; col <= stars; col++){
                cout << "*";
            }
            int spaces = 2*(n-row)-1;
            for (col = 1; col<=spaces; col ++){
                cout << " ";
            }
            for (col = 1; col <= stars; col++){
                cout << "*";
            }
            
        }
        cout << endl;
    }


    for (row = 2; row<=n; row++){
        if (row == n){
            int stars = 2*n - 1;
            for (col = 1; col<=stars; col++){
                cout << "*";
            }
        }
        else{
            int stars = row;
            for (col = 1; col <= stars; col++){
                cout << "*";
            }
            int spaces = 2*(n-row)-1;
            for (col = 1; col<=spaces; col ++){
                cout << " ";
            }
            for (col = 1; col <= stars; col++){
                cout << "*";
            }
            
        }
        cout << endl;
    }
    return 0;
}