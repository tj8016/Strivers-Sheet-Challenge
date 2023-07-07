#include<bits/stdc++.h>
using namespace std;


bool findPattern(string p, string s)
{
    // Write your code here.
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == p[0] && s.substr(i, p.length()) == p) {
			return true;
		}
	}	
	return false;;
}

int main() {
    
    return 0;
}