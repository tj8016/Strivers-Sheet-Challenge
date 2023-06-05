#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}

vector<long long int> printRow(int row) {
  vector<long long int> temp;

  long long int ans = 1;
  temp.push_back(ans);

  for(int j = 1; j < row; j++) {
    ans = ans * (row-j);
    ans = ans / j;

    temp.push_back(ans);
  }
  return temp;
}

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> array;
  
  for(int i = 0; i < n; i++) {
    array.push_back(printRow(i + 1));
  }

  return array;
}


int main()
{
    int n = 5;
    vector<vector<long long int>> ans = printPascal(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "n";
    }
    return 0;
}