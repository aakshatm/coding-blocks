#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i<n ;i++){
        cin >> a[i];
    }

    // ans will store xor of all numbers
    int ans = 0;
    // taking xor of all numbers

    for (int i = 0; i<n; i++){
        ans = (ans ^ a[i]);
    }

    // unique no will be the anwser because number occuring twice will cancel in xor

    cout << ans;

    return 0;
}