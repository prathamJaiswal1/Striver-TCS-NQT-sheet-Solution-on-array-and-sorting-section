/*
Problem Statement: Given an array of pairs, find all the symmetric pairs in the array.
Example 1:
Input: (1,2),(2,1),(3,4),(4,5),(5,4)
Output: (2,1) (5,4)
Explanation: Since (1,2) and (2,1) are symmetric pairs and (4,5) and (5,4) are symmetric pairs.
*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        vp.push_back({a,b});
    }
    map<pair<int,int>,bool>m;
    vector<pair<int,int>>ans;
    for(int i=0;i<n;i++){
        if(m.find({vp[i].second,vp[i].first}) != m.end()){
            ans.push_back({vp[i].first,vp[i].second});
        }
        m[{vp[i].first,vp[i].second}]=true;
    }
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main(){
    solve();
    return 0;
}