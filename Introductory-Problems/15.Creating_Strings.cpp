#include<bits/stdc++.h>
using namespace std;
#define LL long long int
const int MOD = 1e9 + 7;

// Global variables
string combination;
int str_length = 0;
int freq[26] = {0};

// Functions
void calculate_combinations(vector<string> &combinations){
    // When there is no character left.
    if(str_length == (int)combination.length()){
        combinations.push_back(combination);
        return;
    }
    for(int i = 0;i<26;i++){
        if(freq[i] == 0)continue;
        combination.push_back('a' + i);
        freq[i]--;
        calculate_combinations(combinations);
        combination.pop_back();
        freq[i]++;
    }

}

void solve(){
    // Take input
    string str;cin>>str;
    str_length = str.length();
    
    // main logic
    // Calculate freq of characters
    for(int i = 0;i<(int)str.length();i++)freq[str[i] - 'a']++;
    vector<string> combinations;
    calculate_combinations(combinations);

    // Output
    cout<<combinations.size()<<"\n";
    for(int i = 0;i<(int)combinations.size();i++){
        cout<<combinations[i]<<"\n";
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