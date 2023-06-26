#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<int> st;

    for(int i = 0; i < expression.length(); i++) {
        if(expression[i] == '(' || expression[i] == '{' || expression[i] == '[') {
            st.push(expression[i]);
        }
        else {
            if(st.empty()) return false;
            if(expression[i] == ')' && st.top() != '(') return false;
            if(expression[i] == '}' && st.top() != '{') return false;
            if(expression[i] == ']' && st.top() != '[') return false;
            st.pop();
        }
    }

    if(!st.empty()) return false;
    return true;
}

int main() {
    return 0;
}