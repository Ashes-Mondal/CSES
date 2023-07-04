#include<bits/stdc++.h>
using namespace std;
#define LL long long int

void solve(){
    // Take input
    LL n;cin>>n;
    
    // main logic
    LL total_sum = (n*(n+1))/2;
    if(total_sum&1){
        cout<<"NO\n";
    }else{
        bool taken[n] = {false};
        int seta_ct = 0;
        LL left = total_sum/2;
        int current_max = n;
        while(left){
            if(left>current_max){
                left-=current_max;
                taken[current_max] = true;
                current_max--;
            }else{
                // should exsit in the superset thus, needed not to check
                taken[left] = true;
                left-=left;
            }
            seta_ct++;
        }
        cout<<"YES\n";
        // set_a
        cout<< seta_ct<<"\n";
        for(int i = 1;i<=n;i++){
            if(taken[i]){
                cout<<i<<" ";
            }
        }
        // set_b
        cout<< "\n"<<n - seta_ct<<"\n";
        for(int i = 1;i<=n;i++){
            if(!taken[i]){
                cout<<i<<" ";
            }
        }
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