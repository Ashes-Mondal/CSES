#include<bits/stdc++.h>
using namespace std;
#define LL long long int

void solve(){
    // Take input
    int n;cin>>n;
    
    // main logic
    auto calculate_combinations = [](LL k)->LL{
        LL part_a = (k*k * (k*k-1))/2;
        LL part_b = 4 * (k-1)*(k-2);
        return part_a - part_b;
    };
    for(int i = 1;i<=n;i++){
        LL ans = calculate_combinations(i);
        cout<<ans<<"\n";
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