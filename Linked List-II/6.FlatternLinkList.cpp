#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* child;

    Node(int value) {
        data = value;
        next = NULL;
        child = NULL;
    }
};

Node* mergeSort(Node* first, Node* second)    //Merging two Linked List
{
    if(first==NULL)
        return second;
 
    if(second==NULL)
        return first;
 
    Node* ans;
 
    if(first->data<second->data)
    {
        ans=first;
        ans->child=mergeSort(first->child,second);
    }
    else
    {
      ans=second;
      ans->child=mergeSort(first, second->child);
    }
    ans->next=NULL;
    return ans;
}

Node* flattenLinkedList(Node* head) 
{
	// Write your code here
    if(head == NULL || head->next == NULL) {
        return head;
    }

    head->next = flattenLinkedList(head->next);

    head = mergeSort(head, head->next);
    head->next = NULL;
    return head;
}

int main() {
    
}