/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;

class LRUCache{
    list<int>dq; //stores keys in cache
    unordered_map<int, list<int>::iterator>ma; //stores reference of keys in cache
    int csize; //maximum capacity of cache
public:
    LRUCache(int);
    void refer(int);
    void display();
};

LRUCache::LRUCache(int n){
    csize = n;
}

void LRUCache::refer(int x){
    //not present in cache
    if(ma.find(x) == ma.end()){

    }
}


int main(){

	return 0;
}
