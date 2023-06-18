#include <bits/stdc++.h> 
using namespace std;

void solve(int i, string& s, vector<string>& ans) {
    if(i == s.length()-1) {
        ans.push_back(s);
        return;
    }

    for(int j = i; j < s.length(); j++) {
        swap(s[i], s[j]);
        solve(i+1, s, ans);
        swap(s[i], s[j]);
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.

    vector<string> ans;
    solve(0, s, ans);
    return ans;
}


int main() {
    return 0;
}