#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here

    int size = arr[0].length();
    string ans = "";
    for(int i = 0; i < size; i++) {
        int ele = arr[0][i];
        for(int j = 1; j < n; j++) {
            if(ele != arr[j][i]) return ans;
        }
        ans += ele;
    }

    return ans;
}

