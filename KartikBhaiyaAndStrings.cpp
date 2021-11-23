#include <iostream>
#include <string>
using namespace std;

int calcPerfectness(string s) {
	int perfectness = 0;
	int i = 0;
	int j = 0;
	while (j < s.length()) {
		int cur_perfectness = 0;
		while (s[i] == s[j]) {
			cur_perfectness++;
			j++;
		}
		if (cur_perfectness > perfectness) {
			perfectness = cur_perfectness;
		}
		i++;
	}

	return perfectness;

}

string swapString(string &s, int indx) {
	if (s[indx] == 'a') {
		s[indx] = 'b';
	}
	else {
		s[indx] = 'a';
	}
	return s;

}

int main() {
	int k;
	cin >> k;
	string s;
	cin >> s;
	// int max_perfectness  = 1;


	int i = 0;
	// while (i < s.length() && k) {
	// 	string a = s;
	// 	if (calcPerfectness(swapString(a, i)) > calcPerfectness(s)) {
	// 		s = a;
	// 		k--;
	// 	}
	// 	i++;
	// }
	bool visited[s.length()] = {0};

	int len = s.length();
	while (true) {
		if (k > 0) {
			for (int i = 0; i < len; i++) {
				string a = s;
				if ((calcPerfectness(swapString(a, i)) > calcPerfectness(s) ) and !visited[i]) {
					visited[i] = true;
					s = a;
					k--;
				}
			}
		}
		else {
			break;
		}
	}



	cout << s;

	return 0;
}
