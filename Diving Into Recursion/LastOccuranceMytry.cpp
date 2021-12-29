#include <iostream>
using namespace std;

int lastOccurace(int *a, int i, int key){
    // base condn
    if (i == -1){
        return -1;
    }

    // recursive condn
    if (a[i] == key){
        return i;
    }
    
    lastOccurace(a, i-1, key);
}



int main()
{
    int a[] = {1, 32, 12, 82, 1, 12};
    int n = sizeof(a)/sizeof(int);
    cout << lastOccurace(a, n-1, 1);
    return 0;
}