int getSize(Node *root){
    if(root == NULL) return;
    else{
        return (1+ getSize(root->left)+getSize(root->right));
    }
}

