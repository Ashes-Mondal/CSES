#include<bits/stdc++.h>
using namespace std;

void solve(){
    // Take input
    int n,m,k;
    cin>>n>>m>>k;
    int applicants[n];
    for(int i = 0;i<n;i++){
        cin>>applicants[i];
    }
    map<int,int> apartments;
    for(int i = 0;i<m;i++){
        int size;cin>>size;
        apartments[size]++;
    }

    // Main Logic
    sort(applicants,applicants+n);
    int accepted = 0;
    for(int i = 0;accepted<m and i<n;i++){
        auto itr = apartments.lower_bound(applicants[i]-k);
        if(itr!=apartments.end() and itr->first<=applicants[i]+k){
            accepted++;
            itr->second--;
            if(itr->second == 0)
                apartments.erase(itr);
        }

    }
    cout<<accepted<<"\n";
    
}

int main(){
    int t = 1;
    // cin>>t;
    while (t--){
        solve();
    }
    
}