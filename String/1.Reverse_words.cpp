#include <bits/stdc++.h>
using namespace std;


string reverseString(string &str){
	// Write your code here.
	string temp = "";
	stack<string> st;
	for(int i = 0; i < str.length(); i++) {
		if(str[i] == ' ') {
			if(temp != "") {
				st.push(temp);
				temp = "";
			}
		} 
		else {
			temp += str[i];
		}
	}	

	if(temp != "") {
		st.push(temp);
	}

	string ans = "";
	while(!st.empty()) {
		ans += st.top();
		st.pop();
		ans+= " ";
	}

	ans.pop_back();

	return ans;
}

int main() {
    return 0;
}