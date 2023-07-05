#include <bits/stdc++.h> 
using namespace std;


int atoi(string s) {
    // Write your code here.
    string temp = "";
    int ans = 0;

    for(int i = 0; i < s.length(); i++) {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            continue;
        }
        else {
            temp += s[i];
        }
    }

    ans = stoi(temp);
    return ans;
}

int main() {
    return  0;
}