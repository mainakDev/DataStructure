

void printLevel(Node *root){
    if(root == NULL) return;
    queue<Node *> q;
    q.push(root);
    while(q.empty() == false){
        Node *curr = q.front();
        q.pop();
        cout<<curr->key <<" ";
        if(curr->left != NULL)
            q.push(curr->left);
        if(curr->right != NULL)
            q.push(curr->right)
    }
}
