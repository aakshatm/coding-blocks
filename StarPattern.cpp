#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    int row , coloum;
    for (row = 1; row<=n; row = row+1){
        for (coloum = 1; coloum<=row; coloum= coloum+ 1){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
