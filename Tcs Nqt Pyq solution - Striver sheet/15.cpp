/*
Problem Statement: Find all the non-repeating elements for a given array. Outputs can be in any order.
Example 1:
Input:
 Nums = [1,2,-1,1,3,1]
Output:
 2,-1,3
Explanation:
 1 is the only element in the given array which occurs thrice in the array. -1,2,3 occurs only once and hence, these are non-repeating elements of the given array.
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
     if(m[arr[i]]==1){
        cout<<arr[i]<<" ";
     }
   }
}
int main(){
    solve();
    return 0;
}