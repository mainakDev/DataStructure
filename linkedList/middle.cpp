/*
Q.Find the middle of a given linked list
 Sol: Traverse linked list using two pointers. Move one pointer by one and the other pointers by two. When the fast pointer reaches the end slow pointer will reach the middle of the linked list
*/


#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};

class  nodeOperations{
public:
    void pushNode(class Node **headRef, int newData){
        class Node *newNode = new Node();
        newNode->data = newData;
        newNode->next = *headRef;
        *headRef = newNode;
    }

    void printNode(class Node *head){
        while(head != NULL){
            cout<<head->data<<"->";
            head = head->next;
        }
        cout<<"NULL"<<endl;
    }

    void printMiddle(class Node *head){
        class Node *slowPtr = head;
        class Node *fastPtr = head;
        if(head!=NULL){
            while(fastPtr != NULL && fastPtr->next != NULL){
                fastPtr = fastPtr->next->next;
                slowPtr = slowPtr->next;
            }
            cout<<"the middle of the list is"<<slowPtr->data<<endl;
        }
    }
};

int main(){
    class Node *head = NULL;
    class nodeOperations *temp = new nodeOperations();
    for(int i =0; i<5; i++ ){
        temp->pushNode(&head, i);
        temp->printNode(head);
        temp->printNode(head);
    }
}
