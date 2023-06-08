#include <bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	map<int, int> mp;
	for(auto i : arr) {
		mp[i]++;
		if(mp[i] > 1) return i;
	}
	return -1;
}


int main() {
    vector<int> arr = {2,1,3,4,2};
    int n = 5;
    return findDuplicate(arr, n);
}