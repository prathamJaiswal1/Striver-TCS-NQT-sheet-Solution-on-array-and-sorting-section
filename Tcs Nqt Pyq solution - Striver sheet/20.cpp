/*
Problem Statement: Finding Equilibrium index in an array

Given a 0-indexed integer array nums, find the leftmost equilibrium Index.

An equilibrium Index is an index at which sum of elements on its left is equal to the sum of element on its right. That is, nums[0] + nums[1] + ... + nums[equilibriumIndex-1] == nums[equilibriumIndex+1] + nums[equilibriumIndex+2] + ... + nums[nums.length-1]. If equilibriumIndex == 0, the left side sum is considered to be 0. Similarly, if equilibriumIndex == nums.length - 1, the right side sum is considered to be 0.

Return the leftmost equilibrium Index that satisfies the condition, or -1 if there is no such index.

Example 1:
Input: nums = [2,3,-1,8,4]
Output: 3
Explanation: The sum of the numbers before index 3 is: 2 + 3 + -1 = 4
The sum of the numbers after index 3 is: 4 = 4
*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    long long ts=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ts+=arr[i];
    }

    long long cs=0;
    for(int i=0;i<n;i++){
        if(cs == (ts-cs-arr[i])){
            cout<<i<<endl;break;
        }
        cs+=arr[i];
    }
}
int main(){
    solve();
    return 0;
}