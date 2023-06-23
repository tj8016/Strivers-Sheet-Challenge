#include <bits/stdc++.h> 
using namespace std;


bool isPossible(vector<int> positions , int n ,  int c, int mid) {
	int player = 1;
	int lastPos = positions[0];
	for(int i = 0; i < n; i++) {
		if(positions[i] - lastPos >= mid) {
			player++;
			lastPos = positions[i];
		}
		if(player == c) return true;
	}
	return false;
}

int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
	sort(positions.begin(), positions.end());
	int maxDist = positions[n-1] - positions[0];

	int s = 1;
	int e = maxDist;
	int ans = -1;

	while(s <= e) {
		int mid = s + (e-s)/2;

		if(isPossible(positions, n, c, mid)) {
			ans = mid;
			s = mid+1;
		}
		else {
			e = mid - 1;
		}
	}

	return ans;
}

int main() {
    return 0;
}