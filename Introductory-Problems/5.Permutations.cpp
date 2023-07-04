#include<bits/stdc++.h>
using namespace std;
#define LL long long int

void solve(){
    // Take input
    int n;cin>>n;
    
    // main logic
    if(n == 2 or n == 3){
        cout<<"NO SOLUTION\n";
        return;
    }
    for(int i = 2;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(int i = 1;i<=n;i+=2){
        cout<<i<<" ";
    }
}

int main(){
    // Test-case count.
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}