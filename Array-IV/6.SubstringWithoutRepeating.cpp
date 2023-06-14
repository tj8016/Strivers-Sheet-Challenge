#include <bits/stdc++.h> 
using namespace std;

int uniqueSubstrings(string input)
{
    //Write your code here
    int maxlen = 0;
    int j = 0;
    int i = 0;
    set<char> mp;

    while(i < input.length()) {
        if(mp.find(input[i]) != mp.end()) {
            mp.erase(input[j]);
            j++;
        }
        else {
            mp.insert(input[i]);
            maxlen = max(maxlen, i-j+1);
            i++;
        }
    }

    return maxlen;
}

int main() {
    
}