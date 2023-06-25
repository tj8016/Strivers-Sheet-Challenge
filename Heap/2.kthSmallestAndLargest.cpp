#include <bits/stdc++.h>
using namespace std;

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	sort(arr.begin(), arr.end());
	
	int kthsmallestindex = k-1;
	int kthlargestindex = n-k;

	vector<int> ans;
	ans.push_back(arr[kthsmallestindex]);
	ans.push_back(arr[kthlargestindex]);
	
	return ans;
}

int main() {
    return 0;
}