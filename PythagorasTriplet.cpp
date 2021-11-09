#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1 || n == 2){
        cout << -1; 
    }
    else if (n % 2 == 0){
        cout << n*n/4 -1 << " "<< n*n/4 +1;
    }
    else if (n % 2 !=0){
        cout << (n*n - 1)/2 << " "<< (n*n + 1)/2;
    }
    return 0;
}