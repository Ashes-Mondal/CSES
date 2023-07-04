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
    int a,b;cin>>a>>b;
    
    // main logic
    int sum = a+b;
    // Cond 1: a+b multiple of 3
    // Cond 2: a > sum/3 and b > sum/3
    if(sum%3 == 0 and a>=sum/3 and b>=sum/3){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

}

int main(){
    // Test-case count.
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}