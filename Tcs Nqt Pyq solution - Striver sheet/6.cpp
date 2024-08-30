/*
Problem Statement: Rearrange the array such that the first half is arranged in increasing order, 
and the second half is arranged in decreasing order

Example 1:
Input: 8 7 1 6 5 9
Output: 1 5 6 9 8 7
Explanation: First three elements are in the ascending order and next three elements are in the descending order.
*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int i=n/2,j=n-1;
    while(i<=j){
        swap(arr[i++],arr[j--]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    solve();
    return 0;
}