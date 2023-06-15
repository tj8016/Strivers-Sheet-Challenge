#include<bits/stdc++.h>
using namespace std;


int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i = 0, j = 0;
	while(j < n) {
		if(arr[i] == arr[j])j++;
		else {
			i++;
			arr[i] = arr[j];
		}
	}

	return i+1;
}

int main() {
    return 0;
}