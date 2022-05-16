/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

int maxDepth(Node *root){
    if(root == NULL) return 0;
    return 1+max(maxDepth(root->left),maxDepth(root->right));
}

int minDepth(Node *root){
    if(root == NULL) return 0;
    return 1+min(minDepth(root->left),minDepth(root->right));
}

bool isBalanced(Node *temp){
   return (maxDepth(root) - minDepth(root) <= 1);
}

int main(){

	return 0;
}
