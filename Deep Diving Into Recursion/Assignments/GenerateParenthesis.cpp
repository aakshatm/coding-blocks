#include<bits/stdc++.h>
using namespace std;

void generateParenthesis(int n, string output,int noOfOpening, int noOfClosing){
    // base case
    if (2*n == output.length()){
        cout << output << endl;
        return; 
    }

    // recursive case
    // 1. adding opening bracket
    if (noOfOpening < n){
        // add opening bracket
        output.push_back('(');
        generateParenthesis(n, output, noOfOpening+1, noOfClosing);
    }

    // 2. adding closing bracket
    if (noOfClosing < noOfOpening){
        // add closing bracket
        output.push_back(')');
        generateParenthesis(n, output, noOfOpening, noOfClosing+1);
    }
}

int main()
{
    int n; 
    n = 2;
    string output = "";
    generateParenthesis(n, output, 0, 0);
    return 0;
}