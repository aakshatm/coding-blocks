#include <iostream>
using namespace std;

void shoppingGame(int m, int n){
    int counterAyush, counterHarshit;
    int sumAyush = 0, sumHarshit = 0;
    for(counterAyush = 1; sumAyush<=m; counterAyush += 2){
        sumAyush += counterAyush;
    }

    for (counterHarshit = 2; sumHarshit<=n; counterHarshit += 2){
        sumHarshit += counterHarshit;
    }

    if (counterAyush > counterHarshit){
        cout << "Aayush" << endl;
    }

    else {
        cout << "Harshit" << endl;
    }
}

int main(){
    int noOfTestCases;
    int m, n; // m is max limit of smartphones that ayush can buy and n for harshit
    cin >> noOfTestCases;
    for (int i = 1; i<=noOfTestCases; i++){
        cin >> m >> n;
        shoppingGame(m, n);
    }


    return 0;
}
