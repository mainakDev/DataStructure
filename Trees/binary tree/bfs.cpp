/*
BFS traversal of tree
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

void bfs(Node *root){
    if(root == NULL)return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *curr = q.front();
        q.pop();
        cout<<curr->value<<" ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
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
	cout<<"BFS: ";
	bfs(root);
	cout<<endl;

	return 0;
}
