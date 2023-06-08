#include <bits/stdc++.h> 
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int row = matrix.size();
    int col = matrix[0].size();
    
    vector<int> temp1(row, -1);
    vector<int> temp2(col, -1);
    
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(matrix[i][j] == 0) {
                temp1[i] = 0;
                temp2[j] = 0;
            }
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (temp1[i] == 0 || temp2[j]==0) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    setZeros(matrix);

    cout << "The Final matrix is: n";
    for (auto it : matrix) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "n";
    }
    return 0;
}