#include <bits/stdc++.h>
using namespace std;


int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 
    queue<pair<int,int>> q;
    int count = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == 2){
                q.push({i, j});
            }
        }
    }

    if(q.empty()) return 0;

    while(!q.empty()) {
        int size = q.size();
        while(size--) {
            pair<int, int> cell = q.front();
            q.pop();
            int r = cell.first;
            int c = cell.second;

            // up
            if(r-1 >= 0 && grid[r-1][c] == 1) {
                grid[r-1][c] = 2;
                q.push({r-1, c});
            }
            // down 
            if(r+1 < n && grid[r+1][c] == 1) {
                grid[r+1][c] = 2;
                q.push({r+1,c});
            }
            // left 
            if(c-1 >= 0 && grid[r][c-1] == 1) {
                grid[r][c-1] = 2;
                q.push({r, c-1});
            }
            // right 
            if(c+1 >= 0 && grid[r][c+1] == 1) {
                grid[r][c+1] = 2;
                q.push({r, c+1});
            }
        }
        count++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == 1){
                return -1;
            }
        }
    }

    return count;
}

int main() {
    return 0;
}