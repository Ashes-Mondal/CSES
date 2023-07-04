#include<bits/stdc++.h>
using namespace std;
#define LL long long int

void solve(){
    // Take input
    LL y,x;cin>>y>>x;
    
    // main logic
    LL val = 1;
    if(y>x){
        // Then we know y,1
        val = y&1?y*(y-2) + 2:y*y;
        y&1?val+=(x-1):val-=(x-1);
    }else{
        // Then we know 1,x
        val = x&1?x*x:x*(x-2) + 2;
        x&1?val-=(y-1):val+=(y-1);
    }
    cout<<val<<"\n";
}

int main(){
    // Test-case count.
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}