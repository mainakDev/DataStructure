/*
delete a node in the middle of a single linked list, given
only access to that node
EXAMPLE
Input: the node ‘c’ from the linked list a->b->c->d->e
Result: nothing is returned, but the new linked list looks like a->b->d->e
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

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

bool deleteNode(Node *n){
    if(n==NULL || n->next==NULL) return false;
    Node *nextNode = n->next;
    n->next = nextNode->next;
    return true;
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
