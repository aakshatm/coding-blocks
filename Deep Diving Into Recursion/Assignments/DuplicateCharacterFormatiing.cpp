#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(string s, string output, int i, int n){
    // base case
    if (i == n){
        cout << output;
        return;
    }

    // recursive case
    if (s[i] == s[i+1]){
        output.push_back(s[i]);
        output.push_back('*');
        removeDuplicate(s, output, i+1, n);
    }

    else{
        output.push_back(s[i]);
        removeDuplicate(s, output, i+1, n);
    }
}

int main()
{
    string s;
    cin >> s; 
    string output = "";
    removeDuplicate(s, output, 0, s.length());
    return 0;
}