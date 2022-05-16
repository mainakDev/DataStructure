/*
Binary tree has 2 traversal
1. DFS
    a. In Order
    b. Pre Order
    c. Post Order
2. BFS-> Level order traversal
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
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
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
