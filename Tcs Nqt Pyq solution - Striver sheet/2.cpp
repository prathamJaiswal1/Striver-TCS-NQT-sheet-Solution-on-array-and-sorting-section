/* Problem Statement: Given an array, we have to find the largest element in the array.
Example 1:
Input:
 arr[] = {2,5,1,3,0};
Output:
 5
Explanation:
 5 is the largest element in the array. */
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxi=-1e9;
    for(int i=0;i<n;i++){
        if(maxi < arr[i]){
            maxi=arr[i];
        }
    }

    cout<<maxi<<endl;
}
int main(){
    solve();
    return 0;
}