/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<vector<int>>myvector{{4,10},{1,3},{2,5},{3,7},{1,3}};
    sort(myvector.begin(),myvector.end());
    for(auto it: myvector) cout<<it[0]<<""<<it[1]<<endl;

}
