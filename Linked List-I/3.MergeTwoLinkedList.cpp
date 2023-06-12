#include <bits/stdc++.h>
using namespace std;


// Following is the linked list node structure.

template <typename T>
class Node {
    public:
    T data;
    Node* next;

    Node(T data) {
        next = NULL;
        this->data = data;
    }

    ~Node() {
        if (next != NULL) {
            delete next;
        }
    }
};



Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int> *n1 = first;
    Node<int> *n2 = second;

    Node<int> *newHead = new Node<int>(0);
    Node<int> *curr = newHead;

    while(n1 != NULL && n2 != NULL) {
        if(n1->data <= n2->data) {
            curr->next = n1;
            n1 = n1->next;
        }
        else {
            curr->next = n2;
            n2 = n2->next;
        }
        curr = curr->next;
    }

    while(n1 != NULL) {
        curr->next = n1;
        curr = curr->next;
        n1 = n1->next;
    }

    while(n2 != NULL) {
        curr->next = n2;
        curr = curr->next;
        n2 = n2->next;
    }

    curr->next = NULL;
    return newHead->next;   
}
