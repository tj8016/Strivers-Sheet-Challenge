#include<bits/stdc++.h>
using namespace std;

int peakIdx(int* arr, int n) {
    int s = 0;
    int e = n-1;

    while(s < e) {
        int mid = s + (e-s)/2;

        if(arr[mid] < arr[0]) {
            e = mid;
        }
        else {
            s = mid + 1;
        }
    }

    return e;
}

int binarySearch(int* arr, int s, int e, int key) {

    while(s <= e) {
        int mid = s + (e-s)/2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    return -1;
}

int search(int* arr, int n, int key) {
    // Write your code here.

    int peak = peakIdx(arr, n);

    if(arr[peak] <= key && arr[n-1] >= key) {
        return binarySearch(arr, peak, n-1, key);
    }
    else {
        return binarySearch(arr, 0, peak-1, key);
    }
}


int main() {
    return 0;
}