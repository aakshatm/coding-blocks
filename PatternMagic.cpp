#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    n = 2*n - 1;
    int row, col;
    for (row = 1; row<=n; row = row + 1){
        if (row == 1 or row == n){
            for (col = 1; col <= n; col = col + 1){
                cout << '*';
            }
        }
        else if (row <= (n+1)/2){
            for (col = 1; col <= ((n+1)/2)+1-row; col = col + 1){
                cout << '*';
            }
            for (col = 1; col<= (2*row - 3); col = col + 1){
                cout << ' ';
            }
            for (col = 1; col <= ((n+1)/2)+1-row; col = col + 1){
                cout << '*';
            }


        }
        else if (row > (n+1)/2){
            for (col = 1; col <= ((n+1)/2)+1-(n-row+1); col = col + 1){
                cout << '*';
            }
            for (col = 1; col<= (2*(n-row+1) - 3); col = col + 1){
                cout << ' ';
            }
            for (col = 1; col <= ((n+1)/2)+1-(n-row+1); col = col + 1){
                cout << '*';
            }
        }
        cout << endl;
    }
    return 0;
}
