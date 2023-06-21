#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int n = arr.size();

	if(arr[0] != arr[1]) return arr[0];
	if(arr[n-1] != arr[n-2]) return arr[n-1];

	int s = 1;
	int e = n-1;

	while(s <= e) {
		int mid = s + (e-s)/2;
		if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid];
		else if((mid%2==0 && arr[mid+1] == arr[mid]) || (mid%2!=0 && arr[mid-1] == arr[mid])) {
			s = mid+1;
		}
		else {
			e = mid-1;
		}
	}

	return -1;
}

int main() {
    return 0;
}