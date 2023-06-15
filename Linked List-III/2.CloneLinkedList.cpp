#include <bits/stdc++.h>
using namespace std;

// Following is the LinkedListNode class structure

template <typename T>   
class LinkedListNode
{
    public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode<T> *random;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};


LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    LinkedListNode<int>* i = head;
    LinkedListNode<int>* front = head;

    while(i != NULL) {
        front = i->next;
        LinkedListNode<int>* copy = new LinkedListNode<int>(i->data);
        i->next = copy;
        copy->next = front;
        i = i->next->next;
    }
    
    i = head;

    while(i != NULL) {
        if(i->next != NULL) {
            if(i->random != NULL) {
                i->next->random = i->random->next;
            }
            else {
                i->next->random = i->random;
            }
            i = i->next->next;
        }
        else {
            i = i->next;
        }
    }

    LinkedListNode<int>* dummy = new LinkedListNode<int>(0);
    LinkedListNode<int>* temp = dummy;

    i = head;
    front = head;
    
    while(i != NULL) {
        front = i->next->next;
        temp->next = i->next;
        i->next = front;
        i = i->next;
        temp = temp->next;
    }

    temp->next = NULL;

    return dummy->next;
}
