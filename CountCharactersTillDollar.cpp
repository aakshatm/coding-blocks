#include <iostream>
using namespace std;

int main(){
    char ch;
    int count = 0;
    while(1){
        cin >> ch;
        if (ch == '$'){
            break;
        }
        count += 1;
    }

    cout << count;
    return 0;
}
