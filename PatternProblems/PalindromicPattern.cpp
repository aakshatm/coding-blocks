#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i<=n; i++){
        // print spaces
        for (int j = 1; j<=n-i; j++){
            cout << "  ";
        }
        // print numbers in decreasing order
        for (int j = i; j>=1; j--){
            cout << j << " ";
        }

        //print numbers in increasing order
        for (int j = 2; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}