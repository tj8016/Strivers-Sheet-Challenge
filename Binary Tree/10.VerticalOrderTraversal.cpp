#include <bits/stdc++.h> 
using namespace std;

template <typename T>
class TreeNode {
    public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};


vector<int> verticalOrderTraversal(TreeNode<int> *root)
{

    map<int, map<int, vector<int>>> mp;
    queue<pair<TreeNode<int>*, pair<int, int>>> q;


    // level order traversal 
    q.push({root, {0, 0}});
    while(!q.empty()) {
        auto p = q.front();
        q.pop();

        TreeNode<int>* temp = p.first;
        int x = p.second.first;
        int y = p.second.second;

        mp[x][y].push_back(temp->data);
        if(temp->left) {
            q.push({temp->left, {x-1, y+1}});
        }
        if(temp->right) {
            q.push({temp->right, {x+1, y+1}});
        }
    }

    vector<int> ans;

    for(auto i: mp) {
        for(auto j: i.second) {
            ans.insert(ans.end(), j.second.begin(), j.second.end());
        }
    }
    return ans;
}

int main() {
    return 0;
}