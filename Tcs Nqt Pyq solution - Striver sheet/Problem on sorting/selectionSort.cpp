#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    // playing cards logic//insert the sortest element from the undsorted array and place it just after sorted array
    for(int i=0;i<n-1;i++){
        int mini=v[i];
        int min_ind=i;
        for(int j=i; j<n; j++){
            if(mini > v[j]){
                mini=v[j];
                min_ind=j;
            }
        }
        swap(v[i],v[min_ind]);
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    solve();
    return 0;
}