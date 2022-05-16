#include<iostream>
using  namespace std;

struct node{
public:
    int data;
    struct node *left, *right;
    node(int data){
        this->data = data;
        left = right = NULL;
    }
};

//inorder: left, data, right
void printInorder(struct node *head){

    if(head == NULL) return;

    printInorder(head->left);
    cout<<head->data <<" ";
    printInorder(head->right);
}

//lpostorder: data, left, right
void printPostorder(struct node *head){
    if(head == NULL) return;
    printPostorder(head->left);
    printPostorder(head->right);
    cout<<head->data
}


//data, left, right
void printPreorder(struct node *head){
    if(head == NULL) return;
    cout<<head->data <<" ";
    printPreorder(head->left);
    printPreorder(head->right);
}


int main(){
    struct node *root = new node(1);
    root->left    = new node(2);
    root->right    = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    cout << "Preorder traversal of binary tree is \n";
    printPreorder(root);

    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);

    return 0;
}
