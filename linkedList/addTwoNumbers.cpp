/*
Write a function that adds the two numbers and returns the sum as a linked
list
EXAMPLE
Input: (3 -> 1 -> 5), (5 -> 9 -> 2)
Output: 8 -> 0 -> 8
*/
#include<bits/stdc++.h>
using namespace std;

Node *addTwoLists(Node *frist, Node *second){
    Node *res = NULL;
    Node *temp, *prev = NULL;
    int carry = 0, sum;
    while(first != NULl || second != NULL){
        sum = carry + (first ? first->data: 0) + (second ? second->data : 0);
        carry = (sum >= 10) ? 1 : 0;
        sum = sum%10;
        Node *temp = new Node(sum);
        if(res == NULL) res = temp;
        else prev->next = temp;
        if(first) first = first->next;
        if(second) second = second->next;
    }
    if(carry > 0){
        Node *aux = new Node(carry);
        temp->next = aux;
    }
    return res;
}

int main(){

	return 0;
}
