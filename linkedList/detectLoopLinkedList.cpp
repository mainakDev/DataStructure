#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};

bool detetctLoop(Node *head){
    Node *slow=head;
    Node *fast=head;
    if(head != NULL){
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
    }
    return false;
}

/*
bool detectLoop(Node *head){
    Node *slow = head;
    Node *fast = head;

    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next;
        if(slow == fast) return true; 
    }
    return false;
}
*/

void push(Node **headRef, int newData){
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = *headRef;
    *headRef = newNode;
}

int main(){
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);

    return 0;
}

