#include<bits/stdc++.h>
using namespace std;

int ct = 0;

void TowerOfHanoi(int n, string source, string destination, string helper){
    // base case
    if (n == 0){
        return;
    }

    // recurisive case
    // move n - 1 discs from source to helper using destination
    TowerOfHanoi(n - 1, source, helper, destination);

    cout << "Move "<< n <<"th disc from "<< source <<" to " << destination << endl;
    ct++;

    // move n -1 discs from helper to destination using source
    TowerOfHanoi(n - 1, helper, destination, source);
    
}

int main()
{
    int n;
    cin >> n;
    TowerOfHanoi(n, "T1", "T2", "T3");
    cout << ct; 
    return 0;
}