#include <iostream>
using namespace std;

void ReplacePi(char *a, int i){
    // base case
    if (a[i] == '\0' || a[i+1] == '\0'){
        return;
    }

    // recursive case
    if (a[i] == 'p' and a[i+1]== 'i'){
        // shift all the letters by 2 steps right
        int j = i + 2;
        while (a[j]!='\0'){
            j++;
        }

        while (j >= i + 2){
            a[j + 2] = a[j];
            j--;
        }

        // add 3.14 in first 4 indexs
        a[i] = '3';
        a[i+1] = '.';
        a[i+2] = '1';
        a[i+3] = '4';
        ReplacePi(a, i+4);
    }

    else{
        ReplacePi(a, i + 1);
    }
}


int main()
{
    char a[100] = "apiexpisd";
    ReplacePi(a, 0);

    cout << a;
    return 0;
}