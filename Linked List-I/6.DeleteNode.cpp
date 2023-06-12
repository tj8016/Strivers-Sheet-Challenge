#include<bits/stdc++.h>
using namespace std;


template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};


void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    LinkedListNode<int> *temp = node->next;

    node->data = temp->data;

    node->next = node->next->next;
}

int main() {
    LinkedListNode<int>* head = new LinkedListNode(1);
    head->next = new LinkedListNode(2);
    cout << head->next->data;
    return 0;
}