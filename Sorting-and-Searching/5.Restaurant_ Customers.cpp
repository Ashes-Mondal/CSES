#include<bits/stdc++.h>
using namespace std;

void solve(){
    // Take input
    int n;cin>>n;
    map<int,int> time_and_customer_count_map;
    for(int i = 0;i<n;i++){
        int start,end;
        cin>>start>>end;
        time_and_customer_count_map[start]++;
        time_and_customer_count_map[end+1]--;
    }
    
    // Main logic
    int maximum_customer = 0,running_preffix_sum = 0;
    for(auto item:time_and_customer_count_map){
        running_preffix_sum+=item.second;
        if(maximum_customer<running_preffix_sum){
            maximum_customer = running_preffix_sum;
        }
    }
    cout<<maximum_customer<<"\n";
}

int main(){
    int t = 1;
    // cin>>t;
    while (t--){
        solve();
    }
    
}