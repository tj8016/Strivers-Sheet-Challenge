#include <bits/stdc++.h> 
using namespace std;
// Brute Force
int maxProfit(vector<int> &prices) {
    int profit = INT_MIN;

    for(int i = 0; i < prices.size(); i++) {
        for(int j = i+1; j < prices.size(); j++) {
            if(prices[j] - prices[i] > profit) {
                profit = prices[j] - prices[i];
            }
        }
    }

    return profit;
}

// Optimal 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int buyPricre = INT_MAX;
    int profit = INT_MIN;

    for(auto i : prices) {
        buyPricre = min(buyPricre, i);
        profit = max(profit, i-buyPricre);
    }

    return profit;
}