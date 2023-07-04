#include<bits/stdc++.h>
using namespace std;
#define LL long long int

void solve(){
    //Take input
     LL n;cin>>n;
    
    //main logic
    cout<<n<<" ";
    while(n>1){
        n&1?(n*=3)+=1:n/=2;
        cout<<n<<" ";
    }
}

int main(){
    // Input test-case count.
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}