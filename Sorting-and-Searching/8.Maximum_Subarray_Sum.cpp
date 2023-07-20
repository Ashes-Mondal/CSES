#include<bits/stdc++.h>
using namespace std;
#define LL long long int

void solve(){
    // Take input
    int n;cin>>n;
    LL nums[n];
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }

    // Main Logic
    LL contiguos_sum = 0,min_contiguos_sum = 0,max_contiguos_sum = INT_MIN;
    for(int i = 0;i<n;i++){
        contiguos_sum+=nums[i];
        if(contiguos_sum - min_contiguos_sum >= contiguos_sum){
            max_contiguos_sum = max(max_contiguos_sum,max(contiguos_sum,contiguos_sum-min_contiguos_sum));
        }
        min_contiguos_sum = min(min_contiguos_sum,contiguos_sum);
    }
    cout<< max_contiguos_sum<<"\n";
}

int main(){
    int t = 1;
    // cin>>t;
    while (t--){
        solve();
    }
    
}