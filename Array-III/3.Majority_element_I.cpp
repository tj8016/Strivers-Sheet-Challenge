#include <bits/stdc++.h>
using namespace std;

// using Hashing 
#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int divide = n/2;

	map<int, int> mp;

	for(int i = 0; i < n; i++) {
		mp[arr[i]]++;
	}

	for(auto it : mp) {
		if(it.second > divide) return it.first;
	}
	return -1;
}


// Moore’s Voting Algorithm:
int findMajorityElementMoore(int arr[], int n) {
	// Write your code here.
	int curr = -1;
	int count = 0;

	for(int i = 0; i < n; i++) {
		if(count == 0) curr = arr[i];
		
		if(curr == arr[i]) count++;
		else count--;
	}

	return curr;
}

int main() {
    
}