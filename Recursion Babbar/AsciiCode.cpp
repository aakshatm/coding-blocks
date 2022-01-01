#include <iostream>
#include <string>
using namespace std;

void stringtoAscii(string s){
    if (s == ""){
        return;
    }
    for (int i = 0; i<s.length(); i++){
        int code = s[i];
        cout << code ;
    }
    cout << " ";
}


void Subsequences(string s, string output, int indx){
    // base case 
    if (indx == s.length()){
        cout << output << " ";
        stringtoAscii(output);
        return;
    }

    // recursive case
    // nhi lena
    Subsequences(s, output, indx + 1);

    // lena hai 
    output.push_back(s[indx]);
    Subsequences(s, output, indx + 1);
}



int main()
{
    string s = "ab";
    // stringtoAscii(s);
    string output = "";
    Subsequences(s, output, 0);
    return 0;
}