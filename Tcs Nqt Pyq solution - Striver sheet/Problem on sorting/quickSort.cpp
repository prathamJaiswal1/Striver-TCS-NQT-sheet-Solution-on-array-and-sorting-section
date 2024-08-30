#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int partition(int low,int high,vector<int>&v){
    int pivot=v[low];
    int cnt=0;
    for(int i=low+1; i<=high; i++){
        if(v[i] <= pivot){
            cnt++;
        }
    }
    
    int pi=low+cnt;
    swap(v[low],v[pi]);
    
    int i=low,j=high;
    while(i<pi && j>pi){
        while(i<pi && v[i] <= pivot) i++;
        while(j>pi && v[j] > pivot) j--;
        if(i<pi && j>pi) swap(v[i++],v[j--]);
    }
    
    return pi;
}
void quick_sort(int low,int high,vector<int>&v){
    if(low >= high) return ;
    int p=partition(low,high,v);
    quick_sort(low,p-1,v);
    quick_sort(p+1,high,v);
}


void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    quick_sort(0,n-1,v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    solve();
    return 0;
}