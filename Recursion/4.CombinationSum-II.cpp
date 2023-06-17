#include <bits/stdc++.h>
using namespace std;

void solve(int i, vector<int>& arr, int n, int target, vector<int> path, vector<vector<int>>& ans) {
	// base case 
	if(target == 0) {
		ans.push_back(path);
	}

	for(int j = i; j < n; j++) {
		if(j > i && arr[j] == arr[j-1]) continue;
		if(arr[j] > target) break;
		path.push_back(arr[j]);
		solve(j+1, arr, n, target-arr[j], path, ans);
		path.pop_back();
	}
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	// Write your code here.
	vector<vector<int>> ans;
	vector<int> path;
	sort(arr.begin(), arr.end());

	solve(0, arr, n, target, path, ans);
	return ans;
}


int main() {
    return 0;
}