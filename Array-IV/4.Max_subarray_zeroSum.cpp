#include <bits/stdc++.h>
using namespace std;

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int maxlen = INT_MIN;
  int sum = 0;
  map<int, int> mp;

  for(int i = 0; i < arr.size(); i++) {
    sum += arr[i];

    if(sum == 0) {
      maxlen = i + 1;
    }
    else {
      if(mp.find(sum) != mp.end()) {
        maxlen = max(maxlen, i - mp[sum]);
      }
      else {
        mp[sum] = i;
      }
    }
  }

  if(maxlen == INT_MIN) return 0;

  return maxlen;
}

int main() {

}