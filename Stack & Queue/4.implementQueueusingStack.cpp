#include<iostream>
#include<stack>
using namespace std;

class Queue {
    stack<int> input;
    stack<int> output;

    void inputToOutput() {
        while(!input.empty()) {
            output.push(input.top());
            input.pop();
        }
    }

    public:
    void push(int val) {
        input.push(val);
    }

    int pop() {
        if(!output.empty()) {
            int n = output.top();
            output.pop();
            return n;
        }
        else {
            inputToOutput();
            int n = output.top();
            output.pop();
            return n;
        }
    }

    int front() {
        if(!output.empty()) {
            return output.top();
        }
        else {
            inputToOutput();
            return output.top();
        }
    }

    int size() {
        return input.size() + output.size();
    }
};

int main() {
    Queue q;
    q.push(3);
    q.push(4);
    cout << "The element poped is " << q.pop() << endl;
    q.push(5);
    cout << "The top of the queue is " << q.front() << endl;
    cout << "The size of the queue is " << q.size() << endl;
    return 0;
}