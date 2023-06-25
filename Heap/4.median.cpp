#include<bits/stdc++.h>
using namespace std;

int median(vector<int> arr, int size) {
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;
    if(size&1) {
        return arr[mid];
    }
    else {
        int ans = (arr[mid] + arr[mid+1])/2;
        return ans;
    }
}

void findMedian(int *arr, int n)
{
    vector<int> ans;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        v.push_back(arr[i]);
        sort(v.begin(), v.end());

        int m = median(v, v.size());
        ans.push_back(m);
    }

    for(auto i: ans) {
        cout << i << " ";
    }
}