#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int row, col, no = 1;
    for (row = 1; row <=n; row = row + 1){
        for (col = 1; col<=(n-row); col = col + 1){
            cout << ' '<< '\t';
        }

        for (col = 1; col<=row; col = col + 1){
            cout << no << '\t';
            no = no + 1;
        }

        no = no - 1;

        for (col = 1; col <= row - 1; col = col + 1){
            no = no - 1;
            cout << no << '\t';

        }
        no = no + 1;
        cout << endl;
    }
    return 0;
}
