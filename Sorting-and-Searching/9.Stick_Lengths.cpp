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
    sort(nums,nums+n);
    LL x = nums[n/2],cost = 0;
    for(int i = 0;i<n;i++){
        cost+=abs(nums[i]-x);
    }
    cout<<cost<<"\n";
}

int main(){
    int t = 1;
    // cin>>t;
    while (t--){
        solve();
    }
    
}