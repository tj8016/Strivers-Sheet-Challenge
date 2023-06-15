#include <bits/stdc++.h> 
using namespace std;


vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>> ans;
	sort(arr.begin(), arr.end());

	int i = 0;
	while(i < n) {
		int target = K-arr[i];

		// Two pointer approach
		int j = i+1;
		int k = n-1;

		while(j < k) {
			if(arr[j] + arr[k] < target) j++;
			else if(arr[j] + arr[k] > target) k--;
			else {
				vector<int> temp = {arr[i], arr[j++], arr[k--]};
				ans.push_back(temp);
				while(j < k && arr[j] == arr[j-1])j++;
				while(j < k && arr[k] == arr[k+1])k--;
			}
		}

		i++;
		while(i+1 < n && arr[i] == arr[i-1]) i++;
	}

	return ans;

}

int main() {
    return 0;   
}