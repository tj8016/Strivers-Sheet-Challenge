#include <bits/stdc++.h>
using namespace std;

bool check(int days, vector<int> time, int m, long long int mid) {
	long long int sum = 0;
	long long int  d = 1;

	for(int i = 0; i < m; i++) {
		if(sum+time[i] <= mid) {
			sum += time[i];
		}
		else {
			d++;
			if(d > days || time[i] > mid) return false;
			else {
				sum = time[i];
			}
		}
	}

	return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
	long long int sum = 0;
	for(auto i : time) {
		sum += i;
	}

	long long int s = 1;
	long long int e = sum;

	long long int ans = -1;

	while(s <= e) {
		long long int mid = s + (e-s)/2;

		if(check(n, time, m, mid)) {
			ans = mid;
			e = mid-1;
		}
		else {
			s  = mid + 1;
		}
	}

	return ans;
}

int main() {

}