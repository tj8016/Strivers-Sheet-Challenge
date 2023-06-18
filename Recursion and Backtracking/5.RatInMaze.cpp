#include <bits/stdc++.h> 
using namespace std;


void addAns(vector<vector<int>>& maze, vector<vector<int>>& path,vector<vector<int>>& ans, int n) {
  vector<int> temp;
  for(int i=0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      temp.push_back(path[i][j]);
    }
  }

  ans.push_back(temp);
}

bool isSafe(int row, int col, int n, vector<vector<int>>& maze, vector<vector<bool>>& visited) {
  if(row >= 0 && row < n && col >= 0 && col < n && maze[row][col] == 1 && visited[row][col] == false) {
    return true;
  }
  return false;
}

void solve(int row, int col, vector<vector<int>>& maze, int n, vector<vector<int>>& path,vector<vector<bool>>& visited, vector<vector<int>>& ans) {
  // Base case 
  if(row == n-1 && col == n-1) {
    path[row][col] = 1;
    addAns(maze, path, ans, n);
    path[row][col] = 0;
    return;
  }

  visited[row][col] = true;
  path[row][col] = 1;

  if(isSafe(row-1, col, n, maze, visited)) {
    solve(row-1, col, maze, n, path, visited, ans);
  }

  if(isSafe(row+1, col, n, maze, visited)) {
    solve(row+1, col, maze, n, path, visited, ans);
  }

  if(isSafe(row, col-1, n, maze, visited)) {
    solve(row, col-1, maze, n, path, visited, ans);
  }

  if(isSafe(row, col+1, n, maze, visited)) {
    solve(row, col+1, maze, n, path, visited, ans);
  }
  path[row][col] = 0;
  visited[row][col] = false;
}

vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  // Write your code here.
  vector<vector<int>> ans;
  vector<vector<bool>> visited(n, vector<bool>(n, false));
  vector<vector<int>> path(n, vector<int>(n, 0));

  solve(0, 0, maze, n, path, visited, ans);
  return ans;
}

int main() {
    
}