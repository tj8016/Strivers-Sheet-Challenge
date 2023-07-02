#include <bits/stdc++.h>
using namespace std;


class LRUCache
{   class node {
        public:
        int key;
        int val;
        node * next;
        node * prev;
        node(int _key, int _val) {
            key = _key;
            val = _val;
        }
    };

    node * head = new node(-1, -1);
    node * tail = new node(-1, -1);
    int cap;
    map<int, node*> mp;

public:
    LRUCache(int capacity)
    {
        // Write your code here
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    int addNode(node* newNode) {
        node* temp = head->next;
        newNode->prev = head;
        newNode->next = temp;

        head->next = newNode;
        temp->prev = newNode;
    }

    int deleteNode(node* delnode) {
        node * delprev = delnode -> prev;
        node * delnext = delnode -> next;
        delprev -> next = delnext;
        delnext -> prev = delprev;
    }

    int get(int key)
    {
        // Write your code here
        if(mp.find(key) == mp.end()) return -1;
        else {
            node* resNode = mp[key];
            int res = resNode->val;
            mp.erase(key);

            deleteNode(resNode);
            addNode(resNode);

            mp[key] = head->next;

            return res;
        }
    }

    void put(int key, int value)
    {
        // Write your code here

        if(mp.find(key) != mp.end()) {
            node* resNode = mp[key];
            mp.erase(key);

            deleteNode(resNode);
        }

        if(mp.size() == cap) {
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }

        addNode(new node(key, value));
        mp[key] = head->next;
    }
};


int main() {
    
}
