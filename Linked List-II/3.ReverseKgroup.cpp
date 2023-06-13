#include <bits/stdc++.h>
using namespace std;


    // Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


Node* reverseList(Node* head) {
	
	if(head == NULL || head->next == NULL) {
		return head;
	}
	
	Node* newHead = reverseList(head->next);
	
	head->next->next = head;
	head->next = NULL;
	
	return newHead;
}

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
	if(head == NULL) return head;
	Node* dummy = new Node(0);
	dummy ->next = head;

	int size = 0;
	Node* c = head;
	while(c != NULL) {
		c = c->next;
		size++;
	}
	Node* prv = dummy;
	Node* curr; 
	Node* nxt;

	for(int i = 0; i < n; i++) {
		curr = prv->next;
		nxt = curr->next;
		if(b[i] == 0) continue;
		else if(size > b[i]) {
			for(int j = 1; j < b[i]; j++) {
				curr->next = nxt->next;
				nxt->next = prv->next;
				prv->next = nxt;
				nxt = curr->next;
			}

			prv = curr;
			size = size-b[i];
		}
		else {
			prv->next = reverseList(prv->next);
			break;
		}
	}

	return dummy->next;
}