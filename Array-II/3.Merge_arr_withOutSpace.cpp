#include <bits/stdc++.h>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	for(int i = 0; i < n; i++) {
		arr1[m++] = arr2[i];
	}

	sort(arr1.begin(), arr1.end());
	return arr1;
}

int main() {

}