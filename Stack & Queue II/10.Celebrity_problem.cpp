#include<bits/stdc++.h>
using namespace std;

bool knows(int x, int y) {
    bool ans = (rand() % (1 - 0 +1) + 1);
}


int findCelebrity(int n) {
 	// Write your code here.

	 stack<int> stk;
	 
	 for(int i=0; i<n; i++) stk.push(i);
	 
	 while(stk.size()>1)
	 {
		 int x = stk.top();
		 stk.pop();
		 int y = stk.top();
		 stk.pop();

		 if (knows(x,y)) stk.push(y);
		 else stk.push(x);
	 }

	 int per = stk.top();

	 for(int i=0; i<n; i++)
	 if ((per != i) && (knows(per, i) || !knows(i, per))) return -1;

	 return per;
}

int main() {
    return 0;
}