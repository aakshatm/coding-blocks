#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int lcm = 0;
    while (true){
        lcm++;
        if (lcm%n1==0 && lcm%n2==0){
            break;
        }
    }
    cout << lcm;
    return 0;
}
