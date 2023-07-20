#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
    public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this->val = data;
        left = NULL;
        right = NULL;
    }
};

long long int find(TreeNode<int> *root, long long int& sum) {
    if(root == NULL) return 0;


    long long int left = find(root->left, sum);
    long long int right = find(root->right, sum);

    sum = max(sum, (left + right + root->val));
    return max(left, right) + root->val;
}

long long int findMaxSumPath(TreeNode<int> *root)
{
    // Write your code here.
    if(root == NULL) return -1;
    if(root->left == NULL || root->right == NULL) return -1;
    long long int sum = -999999;
    long long int max = find(root, sum);

    return sum;
}

int main() {
    return 0;
}