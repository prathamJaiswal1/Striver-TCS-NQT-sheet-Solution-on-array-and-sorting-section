/*
Problem statement: Given an array, we have found the number of occurrences of each element in the array.
Example 1:
Input: arr[] = {10,5,10,15,10,5};
Output: 10  3
	     5  2
        15  1
Explanation: 10 occurs 3 times in the array
	         5 occurs 2 times in the array
              15 occurs 1 time in the array
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
}
int main(){
    solve();
    return 0;
}