#include<bits/stdc++.h>
using namespace std;
#define LL long long int
const int MOD = 1e9 + 7;

vector<pair<int,int>> steps;
void tower_of_hanoi(int n,int src,int aux,int dest){
    if(n == 0)return;
    tower_of_hanoi(n-1,src,dest,aux);
    steps.push_back({src,dest});
    tower_of_hanoi(n-1,aux,src,dest);
}

void solve(){
    // Take input
    int n;cin>>n;
    
    // main logic
    tower_of_hanoi(n,1,2,3);
    cout<<steps.size()<<"\n";
    for(int i = 0;i<(int)steps.size();i++){
        cout<<steps[i].first<<" "<<steps[i].second<<"\n";
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