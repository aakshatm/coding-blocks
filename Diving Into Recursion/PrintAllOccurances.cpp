#include <iostream>
using namespace std;

void PrintAllOccurances(int *a, int n, int i, int key){
    // base case
    if (i == n){
        return ;
    }

    // recursive case
    if (a[i] == key){
        cout << i << ' ';
    }
    PrintAllOccurances(a, n, i+1, key);
}

int main()
{
    int a[] = {1, 32, 12, 82, 1, 12};
    int n = sizeof(a)/sizeof(int);
    PrintAllOccurances(a, n, 0, 1);
    return 0;
}