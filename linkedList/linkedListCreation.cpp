/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

struct Node{
    int value;
    Node *next;
    Node(int k){
        value = k;
        next = NULL;
    }
};

void printList(Node *head){
    while(head){
        cout<<head->value<<" ";
        head = head->next;
    }
}

Node *insertBegin(Node *head,int data){
    Node *temp = new Node(data);
    temp->next = head;
    return temp;
}

Node *insertEnd(Node *head, int data){
    Node *temp = new Node(data);
    if(head == NULL) return temp;
    Node *curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = insertBegin(head,9);
    printList(head);
    cout<<endl;
    head = insertEnd(head, 31);
    printList(head);
	return 0;
}
