#include <bits/stdc++.h> 
using namespace std;

vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(), arr.end());

    int curr = arr[0];
    int count = 1;

    map<int, vector<int>> mp;

    for(int i = 1; i < n; i++) {
        if(arr[i] != curr) {
            mp[count].push_back(curr);
            curr = arr[i];
            count = 1;
        }
        else {
            count++;
        }
    }

    mp[count].push_back(curr);

    vector<int> ans;
    vector<int> temp;
    
    for(auto i : mp) {
        for(auto j : i.second) temp.push_back(j);
    }
    

    for(int j = temp.size() - k; j < temp.size(); j++) {
        ans.push_back(temp[j]);
    }

    sort(ans.begin(), ans.end());
    return ans;
}