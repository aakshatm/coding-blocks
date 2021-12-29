#include <iostream>
using namespace std;

void PrintPattern(int n, int lineNo){
    // base case
    if (lineNo == n + 1){
        return;
    }

    // recursive condn
    for (int i = 0; i<lineNo; i++){
        cout << "*" << '\t';
    }
    cout << endl;
    PrintPattern(n, lineNo+1);
}

int main()
{
    int n;
    cin >> n;
    PrintPattern(n, 1);
    return 0;
}