#include<bits/stdc++.h>
using namespace std;

int lcs(string s, string t)

{

    //Write your code here    // tabulation or  up-to-bottom approach

    int S = s.length();

    int T = t.length();

    vector<int> prev(T+1, 0);

    vector<int> curr(T+1, 0);

    for(int i = 1; i<=S; i++){

        for(int j=1; j<=T; j++){

                if(s[i-1] == t[j-1]){

                    curr[j] = 1 + prev[j-1];

                }

                else{

                    curr[j] = max(prev[j], curr[j-1]);

                }

        }

        prev = curr;

    }

    return curr[T];

}