#include <bits/stdc++.h> 
using namespace std;


bool isSafe(int matrix[9][9], int row, int col, int val) {

    for(int i = 0; i < 9; i++) {
        if(i != col && matrix[row][i] == val) {
            return false;
        }

        if(row != i && matrix[i][col] == val) {
            return false;
        }

        if((row != i && col != i) &&matrix[3*(row/3) + (i/3)][3*(col/3) + (i%3)] == val) {
            return false;
        }
    }

    return true;
}

bool isItSudoku(int matrix[9][9]) {
    // Write your code here.
    for(int row = 0; row < 9; row++) {
        for(int col = 0; col < 9; col++) {
            if(matrix[row][col] == 0) {
                for(int i = 1; i <= 9; i++) {
                    if(isSafe(matrix, row, col, i)){
                        matrix[row][col] = i;

                        bool nextPossible = isItSudoku(matrix);
                        if(nextPossible) {
                            return true;
                        }
                        else {
                            matrix[row][col] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}


int main() {
    return 0;
}