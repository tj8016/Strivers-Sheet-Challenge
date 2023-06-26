#include<iostream>
using namespace std;

class Stack {
    int *arr;
    int size;
    int top;

    public:
    Stack() {
        top = -1;
        size = 100;
        arr = new int[size];
    }

    void push(int val) {
        top++;
        arr[top] = val;
    }

    void pop() {
        top--;
    }

    bool empty() {
        if(top < 0) return true;
        else return false;
    }

    int Size() {
        return top+1;
    }
};

int main() {
    Stack s;

    s.push(5);
    cout << s.empty() << endl;
    cout << s.Size() << endl;
    return 0;
}