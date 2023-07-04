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
    string str;cin>>str;
    int n = str.length();
    
    // main logic
    int freq[26] = {0};
    int odd_freq_ct = 0;
    for(int i = 0;i<n;i++){
        freq[str[i] - 'A']++;
        freq[str[i] - 'A']&1?odd_freq_ct++:odd_freq_ct--;
    }
    if(odd_freq_ct>1){
        cout<<"NO SOLUTION\n";
        return;
    }
    string palindrome = "";
    char odd_char = '|'; 
    for(int i = 0;i<26;i++){
        palindrome+=string(freq[i]/2,'A'+i);
        if(freq[i]&1){
            //odd frequency
            odd_char = 'A'+i;
        }
    }
    string reverse_string = palindrome;
    reverse(reverse_string.begin(),reverse_string.end());
    palindrome = odd_char == '|'?palindrome + reverse_string : palindrome + odd_char +reverse_string;
    cout<<palindrome<<"\n";
}

int main(){
    // Test-case count.
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}