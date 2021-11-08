#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int i = 1;
    int count = 1;
    while (count<=n1){
        if ((3*i + 2)%n2==0){
            i++;
        }
        else {
            cout << 3*i + 2 << endl;
            i ++;
            count ++;
        }
    }

    return 0;
}
