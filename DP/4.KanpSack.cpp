#include<bits/stdc++.h>
using namespace std;

int solve(int n, int w, vector<int> &values, vector<int> &weights, vector<vector<int>> &dp){
	if(n < 0){
		return 0;
	}

	if(dp[n][w] != -1){
		return dp[n][w];
	}

	int include = 0;
	if(weights[n] <= w){
		include = values[n] + solve(n-1, w - weights[n], values, weights, dp);
	}

	int exclude = solve(n-1, w, values, weights, dp);

	return dp[n][w] = max(include, exclude);
}

int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	vector<vector<int>> dp(n, vector<int> (w+1, -1));
	return solve(n-1, w, values, weights, dp);
}

int main() {
    
    return 0;
}