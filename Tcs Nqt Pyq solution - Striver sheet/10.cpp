/*
Problem Statement: Given an unsorted array, find the median of the given array.
Example 1:
Input: [2,4,1,3,5]
Output: 3

Example 2:
Input: [2,5,1,7]
Output: 3.5
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
    if(n%2 != 0){
        cout<<arr[n/2]<<endl;
    }else{
        cout<<(arr[n/2 - 1] + arr[n/2])/2.0 <<endl;
    }
    
}
int main(){
    solve();
    return 0;
}