#include<bits/stdc++.h>
using namespace std;


string longestPalinSubstring(string s)
{
    // Write your code here.
    int n = s.length();
    int maxLen = 1;
    int start = 0;
    int end = 0;

    // for odd 
    for(int i = 0; i < n; i++) {
        int l = i-1, r = i+1;
        
        while(l >= 0 && r < n) {
            if(s[l] == s[r]) {
                l--;
                r++;
            }
            else break;
        }

        l = l+1;
        r = r-1;

        if(maxLen < (r-l+1)) {
            maxLen = r-l+1;
            start = l;
            end = r;
        }
    }

    // for even
    for(int i = 0; i < n-1; i++) {
        int l = i, r = i+1;

        while(l >= 0 && r < n) {
            if(s[l] == s[r]) {
                l--;
                r++;
            }
            else break;
        }

        if(l != i) l = l+1;
        r = r-1;

        if(maxLen < (r-l+1)) {
            maxLen = r-l+1;
            start = l;
            end = r;
        }
    }

    return s.substr(start, end-start+1);
}

int main() {
    
    return 0;
}