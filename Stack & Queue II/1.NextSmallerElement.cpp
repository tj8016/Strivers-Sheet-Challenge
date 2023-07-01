#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> st;

    st.push(arr[n-1]);
    vector<int> ans(n, -1);

    for(int i = n-2; i >= 0; i--) {
        if(arr[i] > st.top()) {
            ans[i] = st.top();
            st.push(arr[i]);
        }
        else {
            while(!st.empty() && arr[i] <= st.top()) {
                st.pop();
            }

            if(!st.empty()) ans[i] = st.top();
            st.push(arr[i]);
        }
    }

    return ans;
}

int main() {
    return 0;
}