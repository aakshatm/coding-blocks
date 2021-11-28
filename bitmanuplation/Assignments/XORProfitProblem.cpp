#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b; 
    int max = 0;
    for (int i = a; i<=b; i++){
        for (int j = i; j<=b; j++){
            if (max < (i^j)){
                max = (i ^ j);
            }
        }
    }

    cout << max; 
    return 0;
}