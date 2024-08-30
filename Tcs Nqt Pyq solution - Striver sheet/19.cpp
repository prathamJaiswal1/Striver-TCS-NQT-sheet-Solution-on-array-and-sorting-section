 /*
 Problem Statement: Given an array of integers, having some duplicate elements, sort the array by frequency.
 Example 1:
Input: N = 8, array[] = {1,2,3,2,4,3,1,2}
Output: 2 2 2 1 1 3 3 4 
Explanation: Since  2 is present 3 times in an array , so print it 3 times ,
then print ‘1’ 2 times and then ‘3’ 2 times and 4 has least frequency, it will be printed at last.
 */
#include<bits/stdc++.h>
using namespace std;
static bool comp(pair<int,int>&a,pair<int,int>&b){
    if(a.first==b.first){
        return a.second < b.second;
    }else{
        return a.first > b.first;
    }
}
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>m;
    for(auto i:arr){
        m[i]++;
    }
  
    vector<pair<int,int>>vp;
    for(auto it:m){
        vp.push_back({it.second,it.first});
    }
    sort(vp.begin(),vp.end(),comp);
    for(auto it:vp){
       // cout<<it.first<<" "<<it.second<<endl;
        int k=it.first;
        while(k--){
            cout<<it.second<<" ";
        }
    }
}
int main(){
    solve();
    return 0;
}