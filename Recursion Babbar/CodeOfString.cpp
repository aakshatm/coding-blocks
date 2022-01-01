#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string arr[100];
int ct = 0;


void printArray(string * a, int n){
    cout << '[';
    for (int i = 0; i<n-1; i++){
        cout << a[i] << ", ";
    }
    cout << a[n-1];
    cout << ']';
}


void CodeOfString(string s, int i, int j,int output[], int n){
    // base case 
    if (i >= n){
        string temp = "";
        for (int x = 0; x<j; x++){
            char ch = output[x] + 'a' - 1;
            temp = temp + ch;
        }
        arr[ct++] = temp;
        return;
    }

    // recursive case
    // 1. Take 1 digit
    string num = "";
    num = num + s[i];
    int nm = stoi(num);
    output[j] = nm;
    CodeOfString(s, i+1, j+1, output, n);

    // 2. take 2 digits
    num = "";
    num = num + s[i] + s[i+1];
    nm = stoi(num);
    if (nm <= 26 && i!=(n-1)){
        output[j] = nm;
        CodeOfString(s, i+2, j+1, output, n);
    }



}


int main()
{
    string s;
    cin >> s;
    int output[100];
    CodeOfString(s, 0, 0, output, s.length());
    printArray(arr, ct);
    return 0;
}