/*
replace all spaces in a string with ‘%20'
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

void replace(string s){
    int len = s.size();
    int newLength;
    int countOfEmpty = 0;
    string t = "%20";
    //count white spaces
    for(char ch: s){
        if(ch == ' '){
            countOfEmpty++;
        }
    }
    newLength = len + countOfEmpty * 2;
    for(int i =0; i<newLength; i++){
        if(s[i]==' '){
            s.replace(i,i,t);
        }
    }
    cout<<s<<endl;
}

int main(){
    replace("A B C");
	return 0;
}
