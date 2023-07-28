#include<bits/stdc++.h>
using namespace std;

int kthLargest(vector<int>& arr, int size, int K)
{
	priority_queue<int ,vector<int>,greater<int>>pq;
	for(auto ele:arr){
		pq.push(ele);
		if(pq.size()>K)pq.pop();
	}
	return pq.top();
}

int main() {
    
    return 0;
}