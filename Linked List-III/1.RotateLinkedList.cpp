#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

pair<Node*, int> lastNodeandLen(Node* head) {
     int len = 1;
     Node* temp = head;

     while(temp->next != NULL) {
          temp = temp->next;
          len++;
     }
     return {temp, len};
}

Node *rotate(Node *head, int k) {
     // Write your code here.
     pair<Node*, int> p = lastNodeandLen(head);
     int len = p.second;
     Node* prv = p.first;
     Node* temp = head;

     k = k % len;

     int c = len - k;

     while(c != 1) {
          temp = temp->next;
          c--;
     }

     prv->next = head;
     head = temp->next;
     temp->next = NULL;
     return head;

}

int main() {

}