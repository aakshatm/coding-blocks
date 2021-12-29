#include <iostream>
using namespace std;

int LastOccurance(int *a, int n, int i, int key){
    // base case 
    if (i == n){
        // key is not present
        return -1;
    }

    // recursive case
    if (a[i]==key){
        // i could be the ans
        int bi = LastOccurance(a, n, i+1, key);
        
        if (bi != -1){
            return bi;
        }
        else{
            return i;
        }
    }

    int j = LastOccurance(a, n, i+1, key);
    return j; 

}

int main()
{
    int a[] = {1, 32, 12, 82, 1, 12};
    int n = sizeof(a)/sizeof(int);

    cout << LastOccurance(a, n, 0, 1);

    return 0;
}