#include <iostream>
using namespace std;


// print true on strictly increasing ,strictly decresing, strictly decresing and increasing
int main()
{
    int n; 
    cin >> n;
    int curEle, prevEle;
    cin >> prevEle;
    bool isDecreasing = true; // assuming the sequence to be decreasing 
    int noOfSequences = 1;
    for (int i = 0; i<n-1; i++){
        cin >> curEle;
        if (curEle == prevEle){
            noOfSequences = 10;
        }
        if ((curEle < prevEle) and (isDecreasing == true)){ // decreasing 
            isDecreasing = true;
        }
        else if ((curEle < prevEle) and (isDecreasing == false)){ // increasing decreasing 
            isDecreasing = true;
            noOfSequences++;
        }
        else if ((curEle > prevEle) and (isDecreasing == false)){
            isDecreasing = false;
        }
        else if ((curEle > prevEle) and (isDecreasing == true)){
            isDecreasing = false;
            noOfSequences++;
        }
        prevEle = curEle;
    }

    if ((noOfSequences == 2 && isDecreasing == false) || (noOfSequences == 1)){
        cout << "true" << endl;

    }
    else{
        cout << "false" << endl;

    }
    return 0;
}