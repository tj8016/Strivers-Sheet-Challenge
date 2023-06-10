#include<bits/stdc++.h>
using namespace std;


// Leetcode for unique 
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    long  n = nums.size();
    if(n<4) return {};
    
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    
    for(long i=0;i<n;i++){
        
        for(long j = i+1;j<n;j++){
            
            long long x = long(target) - long(nums[i])-long(nums[j]);
            long l = j+1,r=n-1;
            while(r>l){
                
                if(nums[l]+nums[r]>x) r--;
                else if(nums[l]+nums[r]<x) l++;
                else {
                    ans.push_back({nums[i],nums[j],nums[l++],nums[r--]});
                    while(l<r and nums[l]==nums[l-1]) l++;
                    while(l<r and nums[r]==nums[r+1]) r--;
                }
            }
            while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
        }
        while (i + 1 < n && nums[i + 1] == nums[i]) ++i;
    }
    return ans;
}

// codestudio
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            long long x = target - arr[i] - arr[j];
            
            // Tow sum approach
            int l = j + 1; 
            int k = n - 1;

            while(l < k) {
                if(arr[l] + arr[k] == x) {
                    return "Yes";
                }
                else if(arr[l] + arr[k] < x) {
                    l++;
                }
                else {
                    k--;
                }
            }
        }
    }

    return "No";
}


int main() {
    
}