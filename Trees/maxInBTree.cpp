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

int maxInTree(Node *root){
    if(root == NULL) return INT_MIN;
    return max(root->val, max(maxInTree(root->left), maxInTree(root->right)));
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

	cout<<maxInTree(root);
	return 0;

}
