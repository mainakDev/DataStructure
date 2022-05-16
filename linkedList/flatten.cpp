#include<iostream>
using namespace std;

class node{
public:
    int data;
    int *right, *down;
};

node *head = nullptr;

node *mergeList(node *a, node *b){
    if(a == nullptr){
        return b;
    }
    if(b == nullptr){
        return a;
    }
    node *result;
    if(a->data < b->data){
        result = a;
        result->down = mergeList(a->down, b);
    } else {
        result = b;
        result->down = mergeList(a, b->down);
    }
    result->right = nullptr;
    return result;
}

node *flatten(node *root){
    if(root == nullptr || root->right == nullptr){
        return root;
    }
    root->right = flatten(root->right);
    root = mergeList(root, root->right);
}

int main(){
}
