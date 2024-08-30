/* Find the smallest element in an array
Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 0
Explanation: 0 is the smallest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 5
Explanation: 5 is the smallest element in the array. */

// Solution 

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int mini=1e9;
    for(int i=0;i<n;i++){
        if(mini > arr[i]){
            mini=arr[i];
        }
    }

    cout<<mini<<endl;
}
int main(){
    solve();
    return 0;
}