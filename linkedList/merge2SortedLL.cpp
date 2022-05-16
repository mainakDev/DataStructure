/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
public:
    int data;
    struct Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

Node *mergeList(Node *h1, Node *h2){
    Node *newList = new Node();
    if(h1==NULL)return h2;
    if(h2==NULL)return h1;
    if(h1==NULL && h2==NULL) return NULL;
    if(h1->data<=h2->data){
        newList = h1;
        newList->next = mergeList(h1->next, h2);
    }else {
        newList = h2;
        newList->next = mergeList(h1, h2->next);
    }
}

int main(){

	return 0;
}
