#include<bits/stdc++.h>
using namespace std;

void solve(){
    // Take input
    int n;cin>>n;
    set<int> distint_numbers;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        distint_numbers.insert(num);
    }
    
    // Main logic
    cout<<distint_numbers.size()<<"\n";

}

int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}