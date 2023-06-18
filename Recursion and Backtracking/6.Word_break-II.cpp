#include <bits/stdc++.h> 
using namespace std;


void solve(int i, string& s, string output, vector<string>& ans, set<string> dic) {
    if(i == s.length()) {
        output.pop_back();
        ans.push_back(output);
    }

    string temp = "";
    for(int j = i; j < s.length(); j++) {
        temp += s[j];
        if(dic.find(temp) != dic.end()) {
            string t = output;
            output += temp;
            output += " ";
            solve(j+1, s, output, ans, dic);
            output = t;
        }
    }
}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here
    vector<string> ans;
    string output = "";
    
    set<string> dic(dictionary.begin(), dictionary.end());

    solve(0, s, output, ans, dic);

    return ans;
}

int main() {
    
    return 0;
}