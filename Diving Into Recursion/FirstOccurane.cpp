#include <iostream>
using namespace std;

int FirstOccuance(int *a, int n, int key){
    // base case
    if (n == 0){
        return -1;
    }

    // recurance condn
    if (a[0] == key){
        return 0;
    }

    int i = FirstOccuance(a+1, n - 1, key);

    if (i == -1){
        /// key not found
        return -1;
    }
    else{
        return i+1;
    }
}

int FirstOccurancei(int *a, int n, int i, int key){
    // base case
    if (i == n){
        // key not found 
        return -1;
    }

    // recurance relation
    if (a[i] == key){
        return i;
    }

    FirstOccurancei(a, n, i+1, key);
}

int main()
{
    int a[] = {1, 32, 12, 82};
    int n = 4;
    cout << FirstOccuance(a, n, 12) << endl;
    cout << FirstOccurancei(a, n, 0,12);
    return 0;
}