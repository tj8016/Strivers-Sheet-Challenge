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

 int posts;
TreeNode<int>* f(vector<int>& postOrder, vector<int>& inOrder,int is,int ie){
     if(is>ie || posts<0) return NULL;
     TreeNode<int>* root=new TreeNode<int>(postOrder[posts--]);
     int inIn;
     for(int i=is;i<=ie;i++){
          if(root->val==inOrder[i]){
               inIn=i;
               break;
          }
     }
     root->right=f(postOrder,inOrder,inIn+1,ie);
     root->left=f(postOrder,inOrder,is,inIn-1);
     return root;
}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
	// Write your code here.
     posts=postOrder.size()-1;
     int is=0;
     int ie=inOrder.size()-1;
     return f(postOrder,inOrder,is,ie);
}