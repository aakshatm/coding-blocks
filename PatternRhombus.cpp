#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int row, col, no = 1;
    for (row = 1; row<= 2*n -1 ; row = row + 1){
        if (row <= 3){
            for (col = 1; col <= (n - row); col = col + 1){
                cout << ' '<< '\t';
            }
            for (col = 1; col <= row; col = col + 1){
                cout << no << '\t';
                no = no + 1;
            }
            no = no - 1;
            for (col = 1; col <= row - 1; col = col + 1){
                no = no -1 ;
                cout << no << '\t';
            }
        }
        else {
            no = no - 1;
            no = no - 1;

            for (col = 1; col <= (n - (2*n - row)); col = col + 1){
                cout << ' '<< '\t';
            }
            for (col = 1; col <= (2*n - row); col = col + 1){
                cout << no << '\t';
                no = no + 1;
            }
            no = no - 1;
            for (col = 1; col <= (2*n - row) - 1; col = col + 1){
                no = no -1 ;
                cout << no << '\t';
            }
        }
        no = no + 1;
        cout << endl;
    }
    return 0;
}
