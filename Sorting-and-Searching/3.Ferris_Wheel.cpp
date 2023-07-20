#include<bits/stdc++.h>
using namespace std;

void solve(){
    // Take input
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i = 0;i<n;i++)cin>>arr[i];

    // Main Logic
    sort(arr,arr+n);
    int count = 0;
    int i = 0,j = n-1;
    while(i<j){
        int sum = arr[i] + arr[j];
        if(sum<=x){
            count++;
            i++;
        }else if(arr[j]<=x){
            count++;
        }
        j--;
    }
    if(i == j)
        count++;
    cout<<count<<"\n";
}

int main(){
    int t = 1;
    // cin>>t;
    while (t--){
        solve();
    }
    
}