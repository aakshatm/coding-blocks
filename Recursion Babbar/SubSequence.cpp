#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;


bool compare(string s1, string s2){
    if (s1 < s2){
        return true; 
    }
    return false;
}


void printArrays(string *arr, int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << endl; 
    }
}


void generateSubsequence(string str, int indx, string output, string *arr, int* ct){
    // base case 
    if (indx == str.length()){
        arr[*ct] = output;
        *ct = *ct + 1;
        return;
    }
    // recursive case

    // nhi lena
    generateSubsequence(str, indx+1, output, arr, ct);

    // lena hai 
    output.push_back(str[indx]);
    generateSubsequence(str, indx + 1, output, arr, ct);
}

int main()
{
	int t; 
	cin >> t;
	cin.get(); 
	while (t--){
        string arr[100];
        int ct = 0;
		string s; 
		cin >> s;
		string output = "";
		generateSubsequence(s, 0, output, arr, &ct);
		sort(arr, arr+ct, compare);
		printArrays(arr, ct);
	}
    
    return 0;
}