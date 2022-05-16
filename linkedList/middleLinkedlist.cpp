#include<iostream>
class Node{
    public:
        int data;
        Node *next;
};

int printMiddle(Node *head){
    Node *slow= head;
    Node *fast= head;
    if(head != NULL){
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow->data;
    }
}