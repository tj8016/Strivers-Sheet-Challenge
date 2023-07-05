#include<bits/stdc++.h>
using namespace std;


vector<int> stringMatch(string text, string pattern) {
	// Write your code here.
	int n = text.length();
	int m = pattern.length();

	vector<int> ans;

	int i = 0;
	while(i < n) {
		if(text.substr(i, m) == pattern) {
			ans.push_back(i+1);
		}
		i++;
	}

	return ans;
}


int main() {
    return 0;
}