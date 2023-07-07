#include<bits/stdc++.h>
using namespace std;


int minCharsforPalindrome(string str) {
	// Write your code here.
	int l = 0;
	int h = str.length()-1;
	int x = h;
	int ans = 0;
	while(l < h) {
		if(str[l] == str[h]) {
			l++;
			h--;
		}
		else {
			ans++;
			l = 0;
			h = --x;
		}
	}

	return ans;
}


int main() {
    
    return 0;
}