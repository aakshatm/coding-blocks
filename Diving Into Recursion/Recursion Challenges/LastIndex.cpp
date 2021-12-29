#include <iostream>
using namespace std;

int LastIndex(int *a, int i, int key){
    // base case    
    if (i == -1){
        return -1;
    }


    // recursive case
    if (a[i] == key){
        return i;
    }
    return LastIndex(a, i - 1, key);
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

    cout << LastIndex(a, n - 1, key);
    return 0;
}