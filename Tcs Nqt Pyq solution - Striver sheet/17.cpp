/*
Problem Statement: Given an array that contains both negative and positive integers,
 find the maximum product subarray.

 Example 1:
Input:

 Nums = [1,2,3,4,5,0]
Output:

 120
Explanation:

 In the given array, we can see 1×2×3×4×5 gives maximum product value.
*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    long long ans=0;
    long long pp=1,sp=1;
    for(int i=0;i<n;i++){
        if(pp==0)pp=1;
        if(sp==0)sp=1;
        pp*=arr[i];
        sp*=arr[n-i-1];
        ans=max(ans,max(pp,sp));
    }
    cout<<ans<<endl;
}
int main(){
    solve();
    return 0;
}