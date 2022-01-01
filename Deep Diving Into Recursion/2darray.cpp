#include <iostream>
#include <string>
using namespace std;

int main()
{
    // declaring a 2d array 
    string arr[10];
    string s = {'1', '2', '3'};
    cout << s.length() << endl;
    // s[4] = '$';
    cout << s[4];
    cout << endl;
    for (int i = 0; s[i]!='\0'; i++){
        cout << s[i];
    }
    
    return 0;
}