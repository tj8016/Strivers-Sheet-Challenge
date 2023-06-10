#include <bits/stdc++.h>
using namespace std;


void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int srow = 0;
    int erow = n-1;
    int scol = 0;
    int ecol = m-1;
    int prv, curr;
    int total = n * m;
    int count = 0;

    while(count < total) {
        if(srow == erow || scol == ecol) break;
        prv = mat[srow+1][scol];

        // starting row
        for(int i = scol; i <= ecol; i++) {
            curr = mat[srow][i];
            mat[srow][i] = prv;
            prv = curr;
            count++;
        }
        srow++;
        for(int i = srow; i <= erow; i++) {
            curr = mat[i][ecol];
            mat[i][ecol] = prv;
            prv = curr;
            count++;
        }
        ecol--;

        for(int i = ecol; i >= scol; i--) {
            curr = mat[erow][i];
            mat[erow][i] = prv;
            prv = curr;
            count++;
        }
        erow--;
        for(int i = erow; i >= srow; i--) {
            curr = mat[i][scol];
            mat[i][scol] = prv;
            prv = curr;
            count++;
        }
        scol++;
    }

}

int main() {
    
    return 0;
}