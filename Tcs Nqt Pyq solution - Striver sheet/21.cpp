/*
Check if array is subset of another array.

Write a program to find whether an array is a subset of another array or not.

Given arr1[] and arr2[], we need to find whether arr1[] is a subset of arr2[]. An array is called a subset of another if all of its elements are present in the other array.

Note: Array elements are assumed to be unique.

Example 1:
Input: arr1[]= [1,3,4,5,2]
       arr2[]= [2,4,3,1,7,5,15]
Output: arr1[] is a subset of arr2[]
*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    vector<int>arr(n),arr2(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    sort(arr.begin(),arr.end());
    sort(arr2.begin(),arr2.end());

    if(n>m){
        cout<<"NO"<<endl;return;
    }
    int i=0,j=0;
    while(j<m){
        if(arr[i] == arr2[j]){
            i++;
        }
        j++;
    }
    if(i==n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    
}
int main(){
    solve();
    return 0;
}