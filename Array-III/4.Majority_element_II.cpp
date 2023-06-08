#include <bits/stdc++.h>
using namespace std;


vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    vector<int> ans;
    map<int, int> mp;

    for(auto i : arr) {
        mp[i]++;
    }

    for(auto it : mp) {
        if(it.second > n/3) {
            ans.push_back(it.first);
        }
    }

    return ans;
}

int main() {
    
    return 0;
}