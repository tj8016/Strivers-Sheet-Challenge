#include<iostream>
using namespace std;

class Queue {
    int *arr;
    int front;
    int rear;
    int size;

    public:
    Queue(int n) {
        arr = new int[n];
        size = n;
        rear = 0;
        front = 0;
    }

    void push(int val) {
        if(rear == size) {
            cout << "overflow" << endl;
        }
        else {
            arr[rear] = val;
            rear++;
        }
    }

    void pop() {
        arr[front] = -1;
        front++;
        if(front == rear) {
            front = rear = 0;
        }
    }

    int getFront() {
        if(front != rear) {
            return arr[front];
        }
        else {
            return -1;
        }
    }

    bool isEmpty() {
        if(front == rear) return true;
        else {
            return false;
        }
    }

    int getSize() {
        return rear-front;
    }

};

int main() {
    Queue* q = new Queue(5);

    q->push(3);

    q->push(5);
    
    q->push(7);

    q->push(9);

    cout << "front element is " << q->getFront() << endl;

    q->pop();
    cout << "front element is " << q->getFront() << endl;

    cout << "Size of queue is " << q->getSize() << endl;

    cout << "empty or not " << q->isEmpty() << endl;


    cout << "printing all elements inside Queue " << endl;

    while(!q->isEmpty()) {
        cout << q->getFront() << " ";
        q->pop();
    }
    cout << endl;
    return 0;
}