#include<iostream>
#include<string>
#include<string.h>
using namespace std;
bool palindromeCheck(string str){
    int i=0, j= 0;
    while(i < j){
        if(str[i] != str[j]){
            return false;
        }
        i++; j--;
    }
    return true;
};

int main(){
    string str = "ABCBA";
    palindromeCheck(str);
    return 0;
}
