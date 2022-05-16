/*
check two strings are anagrams or not
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

string checkAnagram(string s1,string s2){
    if(s1.size() == 0 && s2.size() == 0) return "true";
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2) return "True";
    else return "False";
}

int main(){
    cout<<checkAnagram("ABCD","ABC");
	return 0;
}
