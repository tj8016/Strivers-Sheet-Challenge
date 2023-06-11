#include <bits/stdc++.h>
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


// Recursion
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head == NULL || head->next == NULL) return head;
    LinkedListNode<int> *newHead = reverseLinkedList(head->next);

    head->next->next = head;
    head->next = NULL;

    return newHead;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head == NULL || head->next == NULL) return head;

    LinkedListNode<int> *curr = head;
    LinkedListNode<int> *prv = NULL;
    LinkedListNode<int> *nxt = head->next;


    while(nxt != NULL) {
        curr->next = prv;
        prv = curr;
        curr = nxt;
        nxt = nxt->next;
    }

    curr->next = prv;

    return curr;
}

int main() {
    
}