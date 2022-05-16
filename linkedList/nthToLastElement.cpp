/*
Implement an algorithm to find the nth to last element
of a singly linked list
Algorithm:
1 Create two pointers, p1 and p2,
that point to the beginning of the node
2 Increment p2 by n-1 positions,
to make it point to the nth node from the beginning (to
make the distance of n between p1 and p2)
3 Check for p2->next == null if yes return value of p1,
 otherwise increment p1 and p2
If next of p2 is null it means p1 points to the nth node
from the last as the distance
between the two is n
4 Repeat Step 3
*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

Node *nthToLast(Node *head,int n){
    if(head==nullptr) return nullptr;
    Node *p1= head;
    Node *p2= head;
    for(int i=0;i<n-1;i++){
        if(p2==nullptr) return nullptr;
    }
    p2 =p2->next;
    while(p2->next!=nullptr){
        p2=p2->next;
        p1=p1->next;
    }
    return p1;
}

void printList(struct Node* node)
{
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main(){
    struct Node* start = newNode(10);
    start->next = newNode(12);
    start->next->next = newNode(11);
    start->next->next->next = newNode(11);
    start->next->next->next->next = newNode(12);
    start->next->next->next->next->next = newNode(11);
    start->next->next->next->next->next->next = newNode(10);

	return 0;
}
