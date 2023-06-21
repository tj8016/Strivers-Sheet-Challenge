#include <bits/stdc++.h>
using namespace std;

int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> temp;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            temp.push_back(matrix[i][j]);
        }
    }
    sort(temp.begin(), temp.end());

    int size = temp.size();
    int s = 0;
    int e = size-1;
    int mid = s + e/2;
    if(size&1) {
        return temp[mid];
    }
    else {
        int val1 = temp[mid];
        int val2 = temp[mid+1];
        return val1 + val2/2;
    }
}

int main() {
    return 0;
}