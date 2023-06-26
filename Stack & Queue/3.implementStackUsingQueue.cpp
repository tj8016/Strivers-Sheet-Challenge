#include<bits/stdc++.h>
using namespace std;

// using single queue 
class Stack {
    queue<int> q;

    public:
    void Push(int val) {
        q.push(val);
        int size = q.size()-1;

        while(size--) {
            int element = q.front();
            q.pop();
            q.push(element);
        }
    }

    int Pop() {
        int n = q.front();
        q.pop();
        return n;
    }

    int Top() {
        return q.front();
    }

    int Size() {
        return q.size();
    }
    
};

int main() {
    Stack s;
  s.Push(3);
  s.Push(2);
  s.Push(4);
  s.Push(1);
  cout << "Top of the stack: " << s.Top() << endl;
  cout << "Size of the stack before removing element: " << s.Size() << endl;
  cout << "The deleted element is: "<< s.Pop() << endl;
  cout << "Top of the stack after removing element: " << s.Top() << endl;
  cout << "Size of the stack after removing element: " << s.Size();
    return 0;
}