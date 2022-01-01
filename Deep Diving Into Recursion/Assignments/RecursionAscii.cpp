#include <iostream>
#include <string> 
using namespace std;

void generateSubsequences(string in, string out, int i, int j){
    // base case
    if (in[i]=='\0'){
        cout << out << endl;
        return;
    }
    // recursive case
    // 1. ignore ith character
    generateSubsequences(in, out, i+1, j);
    // 2. copy ith character to the output string
    out[j] = in[i];
    generateSubsequences(in, out, i+1, j+1);
}

int main()
{
    string in, out; 
    cin >> in;
    cout << in; 
    generateSubsequences(in, out, 0, 0);
    return 0;
}