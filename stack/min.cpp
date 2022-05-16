/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

stack<int> minStack(vector<int>arr){
    stack<int>mainStack;
    stack<int>minStack;
    for(int i: arr){
        if(mainStack.empty()){
            mainStack.push(i);
            minStack.push(i);
        } else {
            mainStack.push(i);
            if(minStack.top() >= i){
                minStack.push(i);
            }
        }
    }
}

void getMoin(){

}

int main(){

	return 0;
}
