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

int sizeOfBtree(Node *root){
    if(root == NULL) return 0;
    return 1+sizeOfBtree(root->left)+sizeOfBtree(root->right);
}

int main(){
   Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->right=new Node(70);
	root->right->right->right=new Node(80);
	int k=2;

	cout<<sizeOfBtree(root);
	return 0;

}
