#include <bits/stdc++.h> 
using namespace std;
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int> > mergeAns;
    sort(intervals.begin(), intervals.end());
    
    vector<int> temp = intervals[0];
    
    for(int i=1; i<intervals.size(); i++) {
        if(intervals[i][0] <= temp[1]) {
            temp[1] = max(temp[1],intervals[i][1]);
        }
        else {
            mergeAns.push_back(temp);
            temp = intervals[i];
        }
    }
    
    mergeAns.push_back(temp);
    
    return mergeAns;
}


int main () {
    
}
