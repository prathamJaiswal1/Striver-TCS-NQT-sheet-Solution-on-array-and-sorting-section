/*
Problem Statement: You are given an array. The task is to reverse the array and print it. 
Example 1:
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}
Explanation: Since the order of elements gets reversed 
the first element will occupy the fifth position, the second element occupies the fourth position and so on.
*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int i=0,j=n-1;
    while(i<j){
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