/*
Children Sum Property: property in which the sum of
values of the left child and right child should be equal to
the value of their node if both children are present.
Else if only one child is present then the
value of the child should be equal to its node value.

the function returns true or false

*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *left;
    Node *right;
    Node(int k){
        val = k;
        left = right = NULL;
    }
};

bool cSum(Node *root){
    if(root == NULL) return true;
    if(root->left==NULL && root->right==NULL) return true;
    int sum = 0;
    if(root->left) sum+=root->left->val;
    if(root->right) sum+=root->right->val;
    return (root->val == sum && cSum(root->left) && cSum(root->right));
}

int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right->right=new Node(70);
    root->right->right->right=new Node(80);

    cout<<cSum(root);
    return 0;
}
