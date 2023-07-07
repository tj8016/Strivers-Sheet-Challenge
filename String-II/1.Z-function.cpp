#include<bits/stdc++.h>
using namespace std;

int zAlgorithm(string s, string p, int n, int m)
{
	// Write your code here
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == p[0] && s.substr(i, m) == p) {
			count++;
		}
	}	
	return count;
}

int main() {
    
    return 0;
}