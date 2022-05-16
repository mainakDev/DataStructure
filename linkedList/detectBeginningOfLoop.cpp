/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

void detectLoop(Node *head){
     Node *h1 = head;
     Node *h2 = head;
     while(h1->next!==NULL){
        h1 = h1->next;
        h2 = h2->next->next;
        if(h1 == h2) break;
     }
     if(h2->next == NULL) return null;
     h1 = head;
     while(h1 != h2){
        h1 = h1->next;
        h2 = h2->next;
     }
     return h2;
}

int main(){

	return 0;
}
