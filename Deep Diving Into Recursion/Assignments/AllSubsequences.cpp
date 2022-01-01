#include<iostream>
#include <string>
using namespace std; 

string arr[100];
int x = 0;

void generateSubsequences(string in, string out, int i, int j){
	// base case
	if (in[i] == '\0'){
		out[j] = '\0';
		cout << out;
		return;
	}


	// recursive case 

	// 1. Ignore ith character
	generateSubsequences(in , out, i+1, j);
	// 2. take ith character and copy it to output array
	out[j] = in[i];
	generateSubsequences(in, out, i+1, j+1);
}


int main() {
	string in;
	in = "abc";
	string out;
	generateSubsequences(in, out, 0, 0);

	// for (int i = 0; i<x; i++){
	// 	cout << arr[i] << endl;
	// }
	return 0;
}