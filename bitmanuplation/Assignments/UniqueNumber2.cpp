#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    // taking array input
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }   

    // ans would store xor of all numbers
    int ans = 0;
    for (int i = 0; i<n; i++){
        ans ^= a[i];
    }


    // finding the position of first '1' bit in ans
    int pos = 0;
    // conserving ans
    int result = ans;

    while (ans > 0){
        if ((ans & 1)== 1){
            break;
        }
        ans = (ans >> 1);
        pos++;
    } 


    // segregating the numbers in 2 sets with '1' at pos and '0' at position

    int unq1 = 0, unq2 = 0;
    int mask = (1 << pos);

    for (int i = 0; i<n; i++){
        // set 1 with '1' at pos
        if ((a[i] & mask) > 0){
            unq1 = (unq1 ^ a[i]);
        }
    }

    // now we have unq1

    //finding unq2

    unq2 = (result ^ unq1);

    cout << unq2 << " " << unq1;


    return 0;
}