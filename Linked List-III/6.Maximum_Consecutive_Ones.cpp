#include<bits/stdc++.h>
using namespace std;

int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int i = 0, j = 0;
    int maxlen = 0;
    int countZero = 0;

    while(j < n) {
        if(countZero > k) {
            if(arr[i] == 0) countZero--;
            i++;
        }
        else {
            if(arr[j] == 0) countZero++;
            if(countZero <= k) maxlen = max(maxlen, j-i+1);
            j++;
        }
    }

    return maxlen;
}

int main() {
    return 0;
}