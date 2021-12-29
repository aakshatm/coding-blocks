#include <iostream>
using namespace std;

int indexesArray[100000];
int j = 0;

void AllIndexes(int *a, int i, int n, int key){
    // base case
    if (i == n){
        return;
    }

    // recursive case
    if (a[i] == key){
        // store that value in indesxesarray
        indexesArray[j++] = i;
    }
    return AllIndexes(a, i+1, n, key);
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

    AllIndexes(a, 0, n, key);

    // printing the values stored in index array
    for (int i = 0; i<j; i++){
        cout << indexesArray[i] << " ";
    }
    return 0;
}