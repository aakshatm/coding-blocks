#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //upper part
    for (int i = 1; i<=n; i++){
        // spaces (n-row) times

        for (int j = 1; j<=n-i; j++){
            cout << "  ";
        }

        // print stars odd number of times 2*row - 1
        for (int j = 1; j<=2*i - 1; j++){
            cout << "* ";
        }

        cout << endl;
    }

    // lower part

    for (int i = n; i>=1; i--){
        // spaces (n-row) times

        for (int j = 1; j<=n-i; j++){
            cout << "  ";
        }

        // print stars odd number of times 2*row - 1
        for (int j = 1; j<=2*i - 1; j++){
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}