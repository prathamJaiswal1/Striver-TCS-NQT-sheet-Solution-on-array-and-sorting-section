/*
Problem Statement: Given an array of N integers, write a program to add an array element at the beginning,
 end, and at a specific position.

 Example:
Input: N = 5, array[] = {1,2,3,4,5}
insertbeginning(6)
insertending(7)
insertatpos(8,4)
Output: 6,1,2,8,3,4,5,7
Explanation: 6 is added at the beginning and 7 is added at the end and 8 is added at position 4
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int>ans(n+1);
    int ele,pos;cin>>ele>>pos;

    if(pos==0){
        ans[0]=ele;
        for(int i=0; i<n; i++){
            ans[i+1]=arr[i];
        }
    }
    else if(pos==n-1){
        for(int i=0; i<n; i++){
            ans[i]=arr[i];
        }
        ans[n]=ele;
    }else{
        int i=0;
        while(i<pos){
            ans[i]=arr[i];
            i++;
        }
        ans[pos]=ele;
        i++;
        while(i<n){
            ans[i+1]=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    solve();
    return 0;
}