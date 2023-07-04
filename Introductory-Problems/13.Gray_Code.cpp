#include<bits/stdc++.h>
using namespace std;
#define LL long long int
const int MOD = 1e9 + 7;

LL fast_exponential_MOD(int num,int exp){
    if(exp == 1){
        return num%MOD;
    }
    LL sq = fast_exponential_MOD(num,exp/2);
    LL part_a = (sq*sq)%MOD;
    LL part_b = exp&1?num:1LL;
    return (part_a*part_b)%MOD;
}

void solve(){
    // Take input
    int n;cin>>n;
    string binary = string(n,'0');
    
    // main logic
    auto bit_flip = [](string binary,int idx)->string{
        binary[idx] = binary[idx] == '0'?'1':'0';
        return binary;
    };
    vector<int> gray_code(1,0);
    cout<<binary<<"\n";
    int offset = 1;
    for(int i = 0;i<n;i++){
        // Create gray code
        for(int j = gray_code.size()-1;j>=0;j--){
            gray_code.push_back(gray_code[j] + offset);
            // Display binary
            int k = gray_code.size();
            int idx_flip = log2(abs(gray_code[k-1] - gray_code[k-2]));
            binary = bit_flip(binary,idx_flip);
            cout<<binary<<"\n";
        }
        offset*=2;
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