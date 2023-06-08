#include <bits/stdc++.h> 
using namespace std;

int solve(int m, int n, vector<vector<int>>& dp) {
	if(m < 0 || n < 0) return 0;
	if(m == 0 && n == 0) return 1;

	if(dp[m][n] != -1) return dp[m][n];
	int count = 0;

	count += solve(m, n-1, dp);
	count += solve(m-1, n, dp);

	return dp[m][n] = count;
}

int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>> dp(m, vector<int>(n, -1));
	return solve(m-1, n-1, dp);
}

int main() {
    int m = 3;
    int n = 4;

    cout << uniquePaths(m, n) << endl;
}