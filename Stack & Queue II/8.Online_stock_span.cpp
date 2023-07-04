#include <bits/stdc++.h> 
using namespace std;


vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    int n = price.size();
    vector<int> ans;
    stack<int> st;

    for(int i = 0; i < n; i++) {
        if(!st.empty()) {
            if(price[st.top()] > price[i]) {
                ans.push_back(i-st.top());
            }
            else {
                while(!st.empty() && price[st.top()] <= price[i]) {
                    st.pop();
                }
                if(st.empty()) {
                    ans.push_back(i+1);
                }
                else {
                    ans.push_back(i-st.top());
                }
            }
        }
        else {
            ans.push_back(i+1);
        }
        st.push(i);
    }

    return ans;
}

int main() {
    return 0;
}