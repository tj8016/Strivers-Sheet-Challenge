#include <bits/stdc++.h> 
using namespace std;

// Recursion Solution 
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.size() == 1) return;
	
	int element = stack.top();
	stack.pop();

	sortStack(stack);

	if(element > stack.top()) {
		stack.push(element);
	}
	else {
		vector<int> arr;
		while(!stack.empty()) {
			if(stack.top() < element) {
				stack.push(element);
				
				for(int i = arr.size()-1; i >= 0; i--) {
					stack.push(arr[i]);
				}
				break;
			}
			else {
				arr.push_back(stack.top());
				stack.pop();
			}
		}
		if(stack.empty()) {
			stack.push(element);
			for(int i = arr.size()-1; i >= 0; i--) {
				stack.push(arr[i]);
			}
		}
	}
}

// Iterative Solution 
#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
	// Write your code here
	vector<int> arr;
	while(!stack.empty()) {
		arr.push_back(stack.top());
		stack.pop();
	}

	sort(arr.begin(), arr.end());

	for(auto i: arr) {
		stack.push(i);
	}
}

int main() {
    return 0;
}