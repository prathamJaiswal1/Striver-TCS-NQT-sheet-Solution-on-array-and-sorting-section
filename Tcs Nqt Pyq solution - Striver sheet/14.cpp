/*
Problem Statement: Find all the repeating elements present in an array.
Example 1:
Input: 
Arr[] = [1,1,2,3,4,4,5,2]
Output:
 1,2,4
Explanation:
 1,2 and 4 are the elements which are occurring more than once
*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
   for(int i=0;i<n;i++){
     if(m[arr[i]]>1){
        cout<<arr[i]<<" ";
     }
   }
}
int main(){
    solve();
    return 0;
}