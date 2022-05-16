#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *left, *right;
};

Node* newNode(int newData){
    Node* temp = new Node;
    temp->data = newData;
    temp->left = temp->right = NULL;
    return (temp);
}

bool isMirror(struct Node *root1, struct Node *root2){
	if(root1 == NULL && root2 == NULL) return true;
	if(root1 && root2 && root1->data == root2->data)
		return isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left);
	return false;
}

bool isSymmetric(struct Node * root){
	return isMirror(root, root);
}

int main(){
	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(2);
	root->left->left = newNode(3);
	root->left->right = newNode(4);
	root->right->left = newNode(4);
	root->right->right = newNode(3);

	isSymmetric(root);
	return 0;
}
