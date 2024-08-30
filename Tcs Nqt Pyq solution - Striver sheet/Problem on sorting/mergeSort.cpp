#include<bits/stdc++.h>
using namespace std;

void merge(int low,int mid,int high,vector<int>&v){
    vector<int>temp;
     int left=low,right=mid+1;
     while(left<=mid && right<=high){
        if(v[left] <= v[right]){
            temp.push_back(v[left++]);
        }else{
            temp.push_back(v[right++]);
        }
     }
     while(left<=mid){
        temp.push_back(v[left++]);
     }
     while(right<=high){
        temp.push_back(v[right++]);
     }
     int j=0;
     for(int i=low; i<=high; i++){
        v[i]=temp[j++];
     }
     temp.clear();
}
void mergeSort(int low,int high,vector<int>&v){
    if(low >= high) return ;
    int mid=(low+high)>>1;
    mergeSort(low,mid,v);
    mergeSort(mid+1,high,v);
    merge(low,mid,high,v);
}
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    mergeSort(0,n-1,v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    solve();
    return 0;
}