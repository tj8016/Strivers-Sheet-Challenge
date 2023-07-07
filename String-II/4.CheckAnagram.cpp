#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    if(str1.length() != str2.length()) return false;

    map<char, int> mp;
    for(auto i: str1) {
        mp[i]++;
    }

    for(int i = 0; i < str2.length(); i++) {
        if(mp.find(str2[i]) == mp.end() && mp[str2[i]] == 0) {
            return false;
        }
        mp[str2[i]]--;
    }
    return true;
}

int main() {
    
    return 0;
}