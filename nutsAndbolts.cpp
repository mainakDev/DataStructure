#include<iostream>
#include<unordered_map>
using namespace std;


void nutboltmatch(char nuts[], char bolts[], int n){
    unordered_map<char, int> hashmap;

    for(int i = 0; i < n; i++){
        hashmap[nuts[i]] = i;
    }

    for(int i= 0; i < n; i++){
        if(hashmap.find(bolts[i]) != hashmap.end())
            nuts[i] = bolts[i];
    }

    cout<< "Matched nuts and bolts are:" <<endl;
    for(int i = 0; i < n; i++)
        cout<<nuts[i] <<" ";
    cout<<endl;
    for(int i = 0; i < n; i++)
        cout<< bolts[i] <<" ";
}

int main(){
    char nuts[] ={'@', '#', '$', '%', '^', '&'};
    char bolts[] ={'$', '%', '&', '^', '@', '#'};
    int n = sizeof(nuts) / sizeof(nuts[0]);
    nutboltmatch(nuts, bolts, n);
    return 0;
}
