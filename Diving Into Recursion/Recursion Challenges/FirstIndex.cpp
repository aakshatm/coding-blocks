#include <iostream>
using namespace std;

int FirstIndex(int *a, int i, int n, int key){
    // base case
    if (i == n){
        return -1;
    }


    // recursive case
    if (a[i] == key){
        return i;
    }
    return FirstIndex(a, i+1, n, key);
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }

    int key;
    cin >> key;

    cout << FirstIndex(a, 0, n, key);
    return 0;
}