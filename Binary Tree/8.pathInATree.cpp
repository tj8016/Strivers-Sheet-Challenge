#include<bits/stdc++.h>
using namespace std;

template <typename T = int>
class TreeNode
{
    public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

bool solve(TreeNode<int> *root, int x, vector<int>& ans) {
	if(root == NULL) return false;
	
	ans.push_back(root->data);
	if(root->data == x) return true;

	bool left = solve(root->left, x, ans);
	
	bool right = solve(root->right, x, ans);

	if(!left && !right) {
		ans.pop_back();
		return false;
	}
	return true;
}

vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
	if(root == NULL) return {};
	vector<int> ans;
	solve(root, x, ans);

	return ans;
}

int main() {
    
    return 0;
}