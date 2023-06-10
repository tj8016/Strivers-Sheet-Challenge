#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    int curr = 1;
    int maxi = INT_MIN;
    int i = 0;

    while(i < n) {
        if(i+1 < n && arr[i] == arr[i+1]) i++;
        else if(i + 1 < n && arr[i] + 1 == arr[i+1]) {
            curr++;
            i++;
        }
        else {
            maxi = max(maxi, curr);
            curr = 1;
            i++;
        }
    }

    return maxi;
}

int main() {

}