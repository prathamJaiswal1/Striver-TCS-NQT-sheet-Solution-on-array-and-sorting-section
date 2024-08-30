/*
Rotate array by K elements : Block Swap Algorithm
Problem Statement: Given an array of n size, rotate the array by k elements using the Block Swap Algorithm.
Example 1:
Input: N = 5, array[] = {1,2,3,4,5} K=2
Output: {3,4,5,1,2}
Explanation: Rotate the array to right by 2 elements.
*/
#include<bits/stdc++.h>
using namespace std;
void reverse(int i,int j,vector<int>&v){
     while(i<=j){
        swap(v[i++],v[j--]);
     }
}
void solve(){
    int n,k;cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(0,k-1,arr);
    reverse(k,n-1,arr);
    reverse(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    solve();
    return 0;
}