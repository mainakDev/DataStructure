#include<iostream>
#include<string>
using namespace std;

bool checkSubRecursive(string str1, string str2, int n, int m){

    if(m == 0) return true; //if the substring is empty return true
    if(n == 0) return false; //if the main string is empty return fasle
    if(str1[n-1] == str2[m-1]) return(str1,str2,n,m);
    else return(str1,str2, n-1, m);
}

int main(){
    string str1 = "ABCDEFGHIJ";
    string str2 = "AEGI";
    int n = str1.size();
    int m = str2.size();
    checkSubRecursive(str1,str2,n,m);
    return 0;
}
