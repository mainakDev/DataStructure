/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node *left;
    Node *right;
    Node(int k){
        value = k;
        left = right = NULL;
    }
};

Node *addToTree(int arr[], int s, int e){
    if(e<s) return NULL;
    int m = (s+e)/2;
    Node *root = new Node(arr[m]);
    root->left = addToTree(arr,s,m-1);
    root->right = addToTree(arr,m+1,e);
    return root;
}

Node *createBST(int arr[],int s,int e){
    return addToTree(arr,s,e);
}

void preOrder(Node *root){
    if(root==NULL)return;
    cout<<root->value<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int s = 0;
    int e = sizeof(arr)/sizeof(arr[0]);
    Node *temp = createBST(arr,s,e);
    preOrder(temp);
	return 0;
}
