#include <bits/stdc++.h> 
using namespace std;


int slidingWindow(vector<int> a, int n, int k) {
    deque<int> dq;

    int maxi = INT_MIN;

    for(int i = 0; i < n; i++) {
        // check for boundaries
        if(!dq.empty() && dq.front() == i-k) {
            dq.pop_front();
        }

        // remove all the element which is smaller the a[i]; 
        while(!dq.empty() && a[dq.back()] >= a[i]) {
            dq.pop_back();
        }

        dq.push_back(i);
        if(i >= k-1) {
            maxi = max(maxi, a[dq.front()]);
        }
    }

    return maxi;
}

vector<int> maxMinWindow(vector<int> a, int n) {
    // Write your code here.
    vector<int> ans;
    for(int i = 1; i <= n; i++) {
        ans.push_back(slidingWindow(a, n, i));
    }

    return ans;
}

int main() {
    return 0;
}