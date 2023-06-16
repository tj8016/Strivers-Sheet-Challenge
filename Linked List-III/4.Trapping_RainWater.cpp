#include<bits/stdc++.h>
using namespace std;

long getTrappedWater(long *arr, int n){
    // Write your code here.
    // T.C -> O(N);
    // S.C -> O(1);
    if(n == 1) return 0;
    long leftmax = 0;
    long rightmax = 0;
    long l = 0; 
    long r = n-1;
    
    long ans = 0;

    while(l < r) {
        if(arr[l] <= arr[r]) {
            if(arr[l] >= leftmax) {
                leftmax = arr[l];
            }
            else {
                ans += leftmax-arr[l];
            }
            l++;
        }
        else {
            if(arr[r] >= rightmax) {
                rightmax = arr[r];
            }
            else {
                ans += rightmax-arr[r];
            }
            r--;
        }
    }

    return ans;
}

int main() {
    return 0;
}