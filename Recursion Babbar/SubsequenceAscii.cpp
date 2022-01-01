#include <iostream>
#include <string>
using namespace std;

int count = 0;


void Asciisubsequences(string s, int i, string output){
    // base case
    if (i == s.length()){
        cout << output << " ";
        count++;
        return;
    }

    // recursive case

    char ch = s[i];
    // 1. Ignore ith character
    Asciisubsequences(s, i+1, output);


    // 2. Take ith character 
    
    Asciisubsequences(s, i+1, output + ch);

    // 3. Take ith character Ascii code 
    
    
    Asciisubsequences(s, i+1, output + to_string(int(ch)));
}

int main()
{
    string s; 
    cin >> s;
    string output = "";
    Asciisubsequences(s, 0, output);
    cout << endl << count; 

    return 0;
}