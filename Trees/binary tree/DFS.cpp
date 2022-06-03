/*
Tree DFS traversal
*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    struct Node *left;
    struct Node *right;
    Node(int k){
        value = k;
        left=right=NULL;
    }
};

void preOrder(Node *root){
    if(root==NULL) return;
    cout<<root->value<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root){

    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->value<<" ";
    inOrder(root->right);
}

void postOrder(Node *root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->value<<" ";
}

int main(){
    Node *root=new Node(7);
	root->left=new Node(1);
	root->right=new Node(9);
	root->left->left=new Node(0);
	root->left->right=new Node(3);
	root->left->right->left=new Node(2);
	root->left->right->right=new Node(5);
	root->left->right->right->left=new Node(4);
	root->left->right->right->right=new Node(6);
	root->right->left=new Node(8);
	root->right->right=new Node(10);
    cout<<"In Order traversal: ";
    inOrder(root);
    cout<<endl;
    cout<<"Pre Order traversal: ";
    preOrder(root);
    cout<<endl;
    cout<<"Post Order traversal: ";
    postOrder(root);
    cout<<endl;
	return 0;
}
