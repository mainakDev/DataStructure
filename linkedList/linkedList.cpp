#include<iostream>
#include<assert.h>
using namespace std;

//template of a node
class Node{
    public:
    int data;
    Node *next;
};

//insertion at the beginning
void push(Node **head_ref, int new_data){
    Node *new_node = new Node();
    new_node->data=new_data;

    new_node->next=(*head_ref);

    (*head_ref) = new_node;
}

// insert after a give node
void inserAfter(Node *prev_node, int new_data){
    if(prev_node==NULL){
        cout<<"The given node cannot be null"<<endl;
        return;
    }
    Node *new_node=new Node();
    new_node->data= new_data;
    new_node->next=prev_node->next;

    prev_node->next=new_node;
}

//inserting a node at the end of the linked list
void append(Node **head_ref, int new_data){
    Node *new_node = new Node();
    Node *last = (*head_ref);
    new_node->data = new_data;

    new_node->next = NULL;

    if((*head_ref)==NULL){
        *head_ref = new_node;
        return;
    }
    while(last->next!=NULL){
        last = last->next;
    }
    last->next = new_node;
    return;
}

//deleting a node in a linked list
void deleteNode(Node **head_ref, int key){
    Node *temp = *head_ref;
    Node *prev = NULL;

    if(temp != NULL && temp->data == key){
        *head_ref = temp->next;
        delete temp;
        return;
    }
    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL){
        return;
    }
    prev->next = temp->next;
    delete temp;
}

//deleting a linked list
void deletList(Node **head_ref){
    Node *current = *head_ref;
    Node *next = new Node();
    while(current != NULL){
        next = current->next;
        free(current);
        current = next;
    }
    *head_ref = NULL;
}

//counting the length of linked list
int getCount(Node *head){
    int count = 0;
    Node *current = head;
    while(current != NULL){
        count++;
        current = current->next;
    }
    return count;
}

//search an element in a linked list
bool search(Node *head, int x){
    Node *current = head;
    while(current != NULL){
        if(current->data == x) return true;
        current = current->next;
    }
    return false;
}

//get nth node in a linked list
int getnode(Node *head, int index){
    int count=0;
    Node *current = head;
    while(current != NULL){
        if(count == index) return (current->data);
        count++;
        current = current->next;
    }
    //if we get to this line means the caller asked for an non existent value
    assert(0);
}

//printing nth node for the end of the linked list
void printNthFromLast(Node *head, int n){
    
}

//printing the linked list
void printList(Node *node){
    while(node != NULL){
        cout<<" "<<node->data;
        node = node->next;
    }
}

//Driver Code
int main(){
    Node *head=NULL;
    append(&head,6);

    push(&head,7);
}