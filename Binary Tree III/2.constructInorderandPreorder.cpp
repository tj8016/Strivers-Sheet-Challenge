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


int findIndex(vector<int> &inorder,int element)

{   

    for(int i=0;i<inorder.size();i++)

    {        

        if(inorder[i]==element)            

        return i;    

    }    

    return -1; 

} 

 

TreeNode<int> * solve(vector<int> &inorder, vector<int> &preorder,int &index,int inorderStart,int inorderEnd,int size)

{    

    if( index >=size || inorderStart>inorderEnd ) 

    {

        return NULL;

    }  

 

    int element=preorder[index++];    

 

    TreeNode<int> *root=new TreeNode<int>(element);    

 

    int position=findIndex(inorder,element);    

 

    root->left=solve(inorder,preorder,index,inorderStart,position-1,size);    

    root->right=solve(inorder,preorder,index,position+1,inorderEnd,size); 

 

    return root; 

}

 

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)

{

    //    Write your code here

    int index=0;   

    int n=inorder.size();    

    TreeNode<int> *root=solve(inorder,preorder,index,0,n-1,n);    

    return root;

}