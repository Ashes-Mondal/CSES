#include<bits/stdc++.h>
using namespace std;
#define LL long long int

void solve(){
    //Take input
    int n;cin>>n;
    
    //main logic
    int XOR = n;
    for(int i = 1;i<n;i++){
        int num;cin>>num;
        XOR^=(i^num);
    } 
    cout<<XOR<<"\n";
}

int main(){
    // Input test-case count.
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}