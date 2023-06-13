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

int getDiff(Node* firstHead, Node* secondHead) {
    int len1 = 0;
    int len2 = 0;

    while(firstHead != NULL) {
        len1++;
        firstHead = firstHead->next;
    }

    while(secondHead != NULL) {
        len2++;
        secondHead = secondHead->next;
    }

    return len1 - len2;
}


Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here

    int diff = getDiff(firstHead, secondHead);

    if(diff < 0) {
        while(diff != 0) {
            secondHead = secondHead->next;
            diff++;
        }
    }
    else {
        while(diff != 0) {
            firstHead = firstHead->next;
            diff--;
        }
    }

    while(firstHead->next != NULL && secondHead->next != NULL) {
        if(firstHead->next == secondHead->next) return firstHead->next;
        firstHead = firstHead->next;
        secondHead = secondHead->next;
    }

    return NULL;
}

int main() {
    
}