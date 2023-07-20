#include<bits/stdc++.h>
using namespace std;

void solve(){
    // Take input
    int n,m;
    cin>>n>>m;
    map<int,int> ticket_prices;
    for(int i = 0;i<n;i++){
        int price;cin>>price;
        ticket_prices[price]++;
    }

    // Main Logic
    for(int i = 0;i<m;i++){
        int amount;cin>>amount;
        auto itr = ticket_prices.upper_bound(amount);

        if(ticket_prices.size()==0 or itr == ticket_prices.begin()){
            cout<<"-1\n";
        }else{
            --itr;
            cout<<itr->first<<"\n";
            itr->second--;
            if(itr->second == 0){
                ticket_prices.erase(itr);
            }
        }
    }
}

int main(){
    int t = 1;
    // cin>>t;
    while (t--){
        solve();
    }
    
}