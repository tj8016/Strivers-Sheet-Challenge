#include <bits/stdc++.h> 
using namespace std;

int jobScheduling(vector<vector<int>> &jobs)
{
    int n=jobs.size();
    sort(jobs.begin(),jobs.end(),[&](vector<int>a,vector<int>b){return a[1]>b[1];});
    int mx=0;
    for (int i=0;i<n;i++)
    {
        mx=max(mx,jobs[i][0]);
    }
    vector<int>temp(mx+1,0);
    for (int i=0;i<n;i++)
    {
        int deadline=jobs[i][0]-1;
        int profit=jobs[i][1];
        while(deadline>=0)
        {
            if (temp[deadline]==0) 
            {
                temp[deadline]=profit;
                break;
            }
            deadline--;
        }
    }
    int ans=0;
    for (int i=0;i<mx;i++)
    {
        ans+=temp[i];
    }
    return ans;
}