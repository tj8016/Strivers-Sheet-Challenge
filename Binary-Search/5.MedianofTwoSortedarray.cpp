#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int>& a, vector<int>& b) {
	int n = a.size();
	int m = b.size();
	vector<int> temp;

	int i = 0;
	int j = 0;
	while(i < n && j < m) {
		if(a[i] <= b[j]) {
			temp.push_back(a[i++]);
		}
		else {
			temp.push_back(b[j++]);
		}
	}

	while(i < n) {
		temp.push_back(a[i++]);
	}

	while(j < m) {
		temp.push_back(b[j++]);
	}

	return temp;
}

double median(vector<int>& a, vector<int>& b) {
	// Write your code here.
	vector<int> arr = merge(a, b);

	int size = arr.size();
	int s = 0;
	int e = size-1;

	int mid = s + (e-s)/2;
	double ans;

	if(size&1) {
		ans = (double)arr[mid];
	}
	else {
		ans = (double)(arr[mid] + arr[mid+1])/2.00000;
	}

	return ans;
}

int main() {
    return 0;
}