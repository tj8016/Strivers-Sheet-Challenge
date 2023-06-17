#include<bits/stdc++.h>
using namespace std;

// Recursion
void solve(int i , vector<int> &num, vector<int> &ans, int sum) {
    // Base case
    if(i == num.size()) {
        ans.push_back(sum);
        return;
    }

    // exclude
    solve(i+1, num, ans, sum);
    // include
    sum += num[i];
    solve(i+1, num, ans, sum);
    sum -= num[i];
}

vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int> ans;
    int sum = 0;
    solve(0, num, ans, sum);
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr = {1,2,3};
    cout << "hello" << endl;
    vector<int> ans = subsetSum(arr);
    for(auto i : ans) cout << i << " ";
    cout << endl;
    return 0;
}