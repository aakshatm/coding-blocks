#include <iostream>
using namespace std;

int countSetBits(int n){
    int cnt = 0;
    while (n > 0){
        if((n&1)== 1){
            cnt++;
        }
        n = (n >> 1);
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    while (n--){
        int m; 
        cin >> m;
        cout << countSetBits(m) << endl;
    }
    return 0;
}