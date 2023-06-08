#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    unordered_map<int, int> mp;

    for(int i = 0; i <n; i++) {
        mp[arr[i]]++;
        if(mp[arr[i]] > 1) return arr[i];
    }
    return -1;
}


// using xor 
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int repeat = findDuplicate(arr, n);
	
	int xorsum = repeat;
	for(int i = 1; i <= n; i++) xorsum ^= i;
	for(auto i : arr) xorsum ^= i;
	return {xorsum , repeat};
}

// using equation

int main() {
    vector<int> arr = {2,3,2,1,5};
    pair<int, int> p = missingAndRepeating(arr, 5);
    cout << p.first << " " << p.second << endl;
}