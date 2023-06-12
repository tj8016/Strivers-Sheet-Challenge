#include<bits/stdc++.h>
using namespace std;

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

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    Node* head = new Node(1);
    Node* prv = head;

    int carry = -1;

    while(num1 != NULL || num2 != NULL) {
        int sum = 0;
        if(num1 != NULL) {
            sum += num1->data;
            num1 = num1->next;
        }
        if(num2 != NULL) {
            sum += num2->data;
            num2 = num2->next;
        }
        if(carry != -1) sum += carry;

        int lastDigit = sum % 10;
        sum = sum / 10;
        if(sum > 0) carry = sum;
        else carry = -1;

        Node* t = new Node(lastDigit);
        prv->next = t;
        prv = t;
    }

    if(carry != -1) {
        Node* t = new Node(carry);
        prv->next = t;
        prv = t;
    }

    head = head->next;
    return head;
}

int main() {
    return 0;
}