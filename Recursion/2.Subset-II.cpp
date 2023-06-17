#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 

void solve(int i, vector<int> &arr, int n, vector<int>& output, vector<vector<int>>& ans) {
    if(i != 0) ans.push_back(output);
    
    unordered_set<int> check;
    for(int j = i; j < n; j++) {
        if(check.find(arr[j]) == check.end()) {
            output.push_back(arr[j]);
            solve(j+1, arr, n, output, ans);
            output.pop_back();
            check.insert(arr[j]);
        }
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;
    vector<int> output;

    solve(0, arr, n, output, ans);
    return ans;
}

int main() {
    return 0;
}