#include<bits/stdc++.h>
using namespace std;
#define LL long long int

void solve(){
    // Take input
    int n;cin>>n;
    
    // main logic
    LL moves_ct = 0,prev_num = 0;
    cin>>prev_num;
    for(int i = 1;i<n;i++){
        LL num;cin>>num;
        num<prev_num? moves_ct+=prev_num-num:prev_num = num;
    }
    cout<<moves_ct<<"\n";
}

int main(){
    // Test-case count.
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}