#include <iostream>

using namespace std;

void Subsequences(char *in, char *out, int i, int j) {
    // base case
    if (in[i] == '\0') {
        out[i] = '\0';
        cout << out << endl;
        return;
    }


    // recursive case
    // 1. Ignore the ith character
    Subsequences(in, out, i + 1, j);
    // 2. Take the ith character and copy it to the output array
    out[j] = in[i];
    Subsequences(in, out, i + 1, j + 1);
}

int main()
{
    char in[] = "abc";
    char out[100];      
    Subsequences(in, out, 0, 0);
    return 0;
}
