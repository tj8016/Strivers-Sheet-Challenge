#include <bits/stdc++.h> 
using namespace std;

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    stack<int> st;
    st.push(arr[n-1]);
    vector<int> ans(n, -1);

    for(int i = n-2; i >= 0; i--) {
        if(!st.empty()) {
            while(!st.empty()) {
                if(arr[i] < st.top()) {
                    ans[i] = st.top();
                    break;
                }
                else {
                    st.pop();
                }
            }
        }
        st.push(arr[i]);
    }

    return ans;
}

int main() {
    
    return 0;
}