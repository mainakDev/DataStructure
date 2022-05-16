#include<iostream>
#include<string>
#include<string.h>
using namespace std;
bool checkSubsequence(string str1, string str2){
    int n = str1.size();
    int m = str2.size();
    int j = 0;
    for(int i =0 ; i < n && j < m; i++){
        if(str1[i] == str2[j])
            j++;
    }
    return (j == m);
}

int main(){
    string str1 = "ABCDEF";
    string str2 = "ACE";
    checkSubsequence(str1,str2);
    return 0;
}


//use str.size() isntead of strlen for c++
