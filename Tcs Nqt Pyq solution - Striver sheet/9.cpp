/*
Problem Statement: Given an array, we have to find the average of all the elements in the array.
Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 3
Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+3+4+5)/5 = 3.
*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum/n<<endl;
    
}
int main(){
    solve();
    return 0;
}