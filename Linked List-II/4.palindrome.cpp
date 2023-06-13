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

LinkedListNode<int> *reverse(LinkedListNode<int> *head) {
    if(head->next == NULL) return head;

    LinkedListNode<int>* newHead = reverse(head->next);

    head->next->next = head;
    head->next = NULL;

    return newHead;
}

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head == NULL || head->next == NULL) return true;

    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* first = head;

    while(first->next != NULL && first->next->next != NULL) {
        slow = slow->next;
        first = first->next->next;
    }

    slow->next = reverse(slow->next);
    slow = slow->next;

    first = head;

    while(slow != NULL) {
        if(slow->data != first->data) return false;
        slow = slow->next;
        first = first->next;
    }

    return true;
}

int main() {
    return 0;
}