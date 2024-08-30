/*
Problem Statement: Given an array, find the second smallest and 
second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.
Example 1:
Input:
 [1,2,4,7,7,5]
Output:
 Second Smallest : 2
	Second Largest : 5
Explanation:
 The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    set<int>st;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        st.insert(arr[i]);
    }
    
    if(st.size()==1){
        cout<<-1<<endl;
        return;
    }

    int flar=0,slar=0;
    for(int i=0; i<n; i++){
        if(flar < arr[i]){
            slar=flar;
            flar=arr[i];
        }
        else if(slar < arr[i] && arr[i] != flar){
            slar=arr[i];
        }
    }
    cout<<flar<<" "<<slar<<endl;

    int fsma=1e9,ssma=1e9;
    for(int i=0; i<n; i++){
        if(fsma > arr[i]){
            ssma=fsma;
            fsma=arr[i];
        }
        else if(ssma > arr[i] && fsma != arr[i]){
            ssma=arr[i];
        }
    }
    cout<<fsma<<" "<<ssma<<endl;
    
}
int main(){
    solve();
    return 0;
}