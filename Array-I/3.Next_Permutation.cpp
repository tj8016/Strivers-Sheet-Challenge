#include <bits/stdc++.h> 
using namespace std;


vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    next_permutation(permutation.begin(),permutation.end());
    return permutation;
}

int main() {
    vector<int> arr = {3,2,1};
    vector<int> nextPermu = nextPermutation(arr, arr.size());

    for(auto i : nextPermu) {
        cout << i << " ";
    }
}