#include<bits/stdc++.h>
using namespace std;
#define LL long long int
const int MOD = 1e9 + 7;

LL difference(LL binary,LL *arr,LL n){
    LL sum = 0,total = 0;
    for(int i = 0;i<n;i++){
        if(binary&1){
            sum+=arr[i];
        }
        binary>>=1;
        total+=arr[i];
    }
    return abs(total - 2*sum);
    
}

void solve(){
    // Take input
    LL n;cin>>n;
    LL arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    // Main logic
    LL ans = INT_MAX;
    for(int i = 0;i<(1<<n);i++){
        ans = min(ans,difference(i,arr,n));
    }
    cout<<ans<<"\n";
}

int main(){
    // Test-case count.
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}