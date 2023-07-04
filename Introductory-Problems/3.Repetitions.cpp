#include<bits/stdc++.h>
using namespace std;
#define LL long long int

void solve(){
    //Take input
    string str;cin>>str;
    
    //main logic
    int ct = 1,mx = ct;
    for(int i = 1;i<(int)str.length();i++){
        str[i] == str[i-1]?ct+=1:ct=1;
        mx = max(mx,ct);
    }
    cout<<mx<<"\n";
}

int main(){
    // Input test-case count.
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}