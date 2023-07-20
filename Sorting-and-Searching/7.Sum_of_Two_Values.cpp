#include<bits/stdc++.h>
using namespace std;

void solve(){
    // Take input
    int n,x;cin>>n>>x;
    pair<int,int> ordered[n];
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        ordered[i] = make_pair(num,i);
    }

    // Main Logic
    sort(ordered,ordered+n);
    int i = 0,j = n-1;
    while(i<j){
        int sum = ordered[i].first + ordered[j].first;
        if(sum == x){
            cout<<ordered[i].second + 1 << " " <<ordered[j].second + 1;
            return;
        }
        sum<x?i++:j--;
    }
    cout<<"IMPOSSIBLE\n";
}

int main(){
    int t = 1;
    // cin>>t;
    while (t--){
        solve();
    }
    
}