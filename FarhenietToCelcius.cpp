#include <iostream>
using namespace std;

int main(){
    int min, max, step;
    cin >> min >> max >> step;
    int tempinFar;
    float tempinCel;
    for (tempinFar = min; tempinFar<=max; tempinFar += step){
        tempinCel = (int)((5/9.0)*(tempinFar-32));
        cout << tempinFar << '\t'<< tempinCel << endl;
    }
    return 0;
}
