#include<bits/stdc++.h>
using namespace std;


void solve(int i, vector<int>& arr, int n, int k, vector<int> path, vector<vector<int>>& ans)
{
    if(i == n) {
        int sum = 0;
        for(auto it: path) sum += it;
        if(sum == k) ans.push_back(path);
        return;
    }

    // exclude
    solve(i+1, arr, n, k, path, ans);
    //include
    path.push_back(arr[i]);
    solve(i+1, arr, n, k, path, ans);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> path;
    solve(0, arr, n, k, path, ans);
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    
    return 0;
}