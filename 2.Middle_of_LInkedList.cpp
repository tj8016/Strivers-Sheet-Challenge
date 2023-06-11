#include<bits/stdc++.h>
using namespace std;

class Node {
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

Node *findMiddle(Node *head) {
    // Write your code here

    Node *slow = head;
    Node *first = head;

    while(first != NULL && first->next != NULL) {
        first = first->next->next;
        slow = slow->next;
    }
    
    return slow;
}

int main() {

}