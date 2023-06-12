#include <bits/stdc++.h>
using namespace std;

// Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node* curr = head;
    int totalNode = 0;

    while(curr != NULL) {
        totalNode++;
        curr = curr->next;
    }

    int toDelete = totalNode - K;

    curr = head;
    Node* prv = NULL;

    while(toDelete--) {
        prv = curr;
        curr = curr->next;
    }

    if(curr == head) return head->next;

    prv->next = curr->next;

    delete(curr);

    return head;
}

int main() {
    
    return 0;
}
