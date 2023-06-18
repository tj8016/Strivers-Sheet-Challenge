#include<bits/stdc++.h>
using namespace std;

void addSolution(vector<vector<int>>& board, vector<vector<int>>& ans, int n) {
    vector<int> temp;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            temp.push_back(board[i][j]);
        }
    }

    ans.push_back(temp);
}


bool isSafe(int row, int col, vector<vector<int>>& board, int n) {
    int r = row;
    int c = col;

    // check for row 
    while(c >= 0) {
        if(board[r][c] == 1) return false;
        c--;
    }

    // check for vertical 

    r = row;
    c = col;

    while(r >= 0 && c >= 0) {
        if(board[r][c] == 1) return false;
        r--;
        c--;
    }

    r = row;
    c = col;

    while(r < n && c >= 0) {
        if(board[r][c] == 1) return false;
        r++;
        c--;
    }

    return true;
}

void solve(int col, int n, vector<vector<int>>& board, vector<vector<int>>& ans) {
    if(col == n) {
        addSolution(board, ans, n);
        return;
    }

    for(int row = 0; row < n; row++) {
        if(isSafe(row, col, board, n)) {
            board[row][col] = 1;
            solve(col+1, n, board, ans);
            board[row][col] = 0;
        }
    }
}

vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>> board(n, vector<int>(n, 0));
    vector<vector<int>> ans;
    if(n < 4 && n > 1) return ans;

    int col = 0;
    solve(col, n, board, ans);
    return ans;
}