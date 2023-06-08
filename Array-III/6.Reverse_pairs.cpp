#include <bits/stdc++.h> 
using namespace std;

int merge(vector<int>& arr, int s, int e, int mid) {
	int n1 = mid-s+1;
	int n2 = e-mid;

	int arr1[n1];
	int arr2[n2];

	int originalIdx = s;

	for(long long i = 0; i < n1; i++) {
        arr1[i] = arr[originalIdx++];
    }
    
    for(long long i = 0; i < n2; i++) {
        arr2[i] = arr[originalIdx++];
    }

	// pair count
	int count = 0;
	int i = 0;
	int j = 0;

	while(i < n1 && j < n2) {
		if(arr1[i]/2.0 > arr2[j]) {
			count += n1-i;
			j++;
		}
		else {
			i++;
		}
	}

	i = 0;
    j = 0;
    originalIdx = s;
    
    while(i < n1 && j < n2) {
        if(arr1[i] <= arr2[j]) {
            arr[originalIdx++] = arr1[i++];
        }
        else {
            arr[originalIdx++] = arr2[j++];
        }
    }

    while(i < n1) {
        arr[originalIdx++] = arr1[i++];
    }
    while(j < n2) {
        arr[originalIdx++] = arr2[j++];
    }
    
    return count;
}

int mergeSort(vector<int>& arr, int s, int e) {
	if(s >= e) return 0;

	int count = 0;
	int mid = s + (e-s)/2;
	count += mergeSort(arr, s, mid);
	count += mergeSort(arr, mid+1, e);

	count += merge(arr, s, e, mid);
	return count;
}

int reversePairs(vector<int> &arr, int n){
	// Write your code here.
	return mergeSort(arr, 0, n-1);	
}

int main() {
    
}