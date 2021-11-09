#include <iostream>
using namespace std;

int main(){
    int i = 0;
    while (true){
        cout << (i*100)%(i+12) << endl;
        i ++;
    }
    return 0;
}
