#include <iostream>
using namespace std;

int countSetBits(int n){
    
    int cnt = 0;
    while (n > 0){
        if ((n & 1) == 1){
            cnt++;
        }
        n = (n >> 1);
    }

    return cnt;
}

int main()
{
    int q;
    cin >> q;
    while (q--){
        int count = 0;
        int a, b;
        cin >> a >> b;
        for(int i = a; i<=b; i++){
            count+= countSetBits(i);
        }
        cout << count << endl;
    }
    return 0;
}