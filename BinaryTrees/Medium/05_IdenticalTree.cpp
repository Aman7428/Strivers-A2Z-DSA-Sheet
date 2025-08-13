//Aman Kumar Sharma
//Same Tree (leetcode-100)
#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode():val(0), left(nullptr), right(nullptr){};
    TreeNode(int x):val(x), left(nullptr), right(nullptr){};
    TreeNode(int x, TreeNode *left, TreeNode *right):val(x), left(left), right(right){};
};

bool isSameTreeMatch(TreeNode *p, TreeNode *q){
    if(p==NULL && q==NULL)return true;
    if(p==NULL || q==NULL)return false;
    if(p->val != q->val)return false;

    bool leftTreeMatch=isSameTreeMatch(p->left, q->left);
    bool rightTreeMatch=isSameTreeMatch(p->right, q->right);

    return leftTreeMatch && rightTreeMatch;
}