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

int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.

    vector<int> temp = merge(row1, row2);
    int size = temp.size();

    return temp[k-1];
}

int main() {
    
}