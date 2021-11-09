#include <iostream>
#include <cmath>
using namespace std;

int otherbaseToDecimal(int n, int sb){
    int index = 0;
    int result = 0;
    while (n > 0){
        int digit; 
        digit = n % 10;
        result = result + digit*pow(sb, index);
        index++;
        n = n/10;
    }
    return result;
}

int DecimalToOtherBase(int n, int db){

    int result = 0;
    int index = 0;
    while (n > 0){
        int rem;
        rem = n % db;
        result = result + rem*pow(10, index);
        n = n / db;
        index++;
    }
    return result;
}

int main()
{
    int sb, db, sn;
    cin >> sb >> db >> sn;

    if (sb == 10){
        cout << DecimalToOtherBase(sn, db);
    }
    else{
        cout << DecimalToOtherBase(otherbaseToDecimal(sn, sb), db);
    }

    return 0;
}