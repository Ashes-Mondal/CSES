#include<bits/stdc++.h>
using namespace std;
#define LL long long int
const int MOD = 1e9 + 7;

LL fast_exponential_MOD(int num,int exp){
    if(exp == 1){
        return num%MOD;
    }
    LL sq = fast_exponential_MOD(num,exp/2);
    LL part_a = (sq*sq)%MOD;
    LL part_b = exp&1?num:1LL;
    return (part_a*part_b)%MOD;
}

void solve(){
    // Take input
    int n;cin>>n;
    
    // main logic
    LL five_ct = 0,k = 5;
    while(n/k){
        five_ct+=n/k;
        k*=5;
    }
    cout<<five_ct<<"\n";
}

int main(){
    // Test-case count.
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}