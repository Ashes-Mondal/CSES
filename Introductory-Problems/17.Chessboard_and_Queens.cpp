#include<bits/stdc++.h>
using namespace std;
#define LL long long int
const int MOD = 1e9 + 7;
const int M = 8;

bool included_rows[M] = {0}, included_columns[M] = {0}, included_diag1[2*M-1] = {0}, included_diag2[2*M-1] = {0};

bool isValid(int i,int j){
    return !(included_columns[j] | included_rows[i] | included_diag1[i-j + M-1] | included_diag2[i + j]);
}

void setQueen(int i,int j,bool value = true){
    included_columns[j] = value;
    included_rows[i] = value;
    included_diag1[i-j + M-1] = value;
    included_diag2[i + j] = value;
}

int calculate_ways(string *chessbord,int queen_left = M,int i = 0){
    // base case
    if(queen_left == 0){
        return 1;
    }
    if(i == M){
        // outofbound
        return 0;
    }
    int sum = 0;
    for(int j = 0;j<M;j++){
        if(chessbord[i][j] == '*')continue;
        if(isValid(i,j)){
            setQueen(i,j);
            sum+=calculate_ways(chessbord,queen_left-1,i+1);
            setQueen(i,j,false);
        }
    }
    return sum;
}

void solve(){
    // Take input
    string chessbord[M];
    for(int i = 0;i<M;i++){
        cin>>chessbord[i];
    }

    // Main logic
    cout<<calculate_ways(chessbord,M)<<"\n";
    
}

int main(){
    // Test-case count.
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}