#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool goingUp = false; // assuming our sequence to be strickly decreasing 
    bool validSequence = true;
    int previousElement, CurrElement;
    cin >> previousElement;
    for (int i = 1; i<n ; i++){
        cin >> CurrElement;
        if (previousElement == CurrElement){
            validSequence = false;
        }
        else if (previousElement<CurrElement){
            goingUp = true;
        }
        

        previousElement = CurrElement;
    

    }

    if (validSequence){
        cout << "true";
    }
    else{
        cout << "false";
    }


}