/*
Problem Statement: Given an array of N integers, the task is to replace each element of the array by its rank in the array.
Example 1:
Input: 20 15 26 2 98 6
Output: 4 3 5 1 6 2
Explanation: When sorted,the array is 2,6,15,20,26,98. So the rank of 2 is 1,rank of 6 is 2,rank of 15 is 3 and so…
*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>temp=arr;
    sort(arr.begin(),arr.end());
    map<int,int>m;
    for(int i=0; i<n; i++){
        m[arr[i]]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<m[temp[i]]<<" ";
    }
}
int main(){
    solve();
    return 0;
}