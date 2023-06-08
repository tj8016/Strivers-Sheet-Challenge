#include <bits/stdc++.h> 
using namespace std;


long long merge(long long *arr, long long s, long long e, long long mid) {
    long long n1 = mid - s + 1;
    long long n2 = e - mid;

    long long arr1[n1];
    long long arr2[n2];

    long long originalIdx = s;

    for(long long i = 0; i < n1; i++) {
        arr1[i] = arr[originalIdx++];
    }
    
    for(long long i = 0; i < n2; i++) {
        arr2[i] = arr[originalIdx++];
    }

    long long inversion = 0;
    long long i = 0;
    long long j = 0;

    while(i < n1 && j < n2) {
        if(arr1[i] > arr2[j]) {
            inversion += n1-i;
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
    
    return inversion;
}

long long mergeSort(long long *arr, long long s, long long e) {
    if(s >= e) {
        return 0;
    }
    long long mid = s + (e-s)/2;
    long long inversion = 0;
    inversion += mergeSort(arr, s, mid);
    inversion += mergeSort(arr, mid+1, e);

    inversion += merge(arr, s, e, mid);
    return inversion;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    return mergeSort(arr,0, n-1);
}


int main() {
    long long arr[] = {2,5,1,3,4};
    long long ans =  getInversions(arr, 5);
    cout << ans << endl;
}