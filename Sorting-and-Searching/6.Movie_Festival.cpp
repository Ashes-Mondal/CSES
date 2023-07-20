#include<bits/stdc++.h>
using namespace std;

void solve(){
    // Take input
    int n;cin>>n;
    pair<int,int> mapping_of_movie_end_and_start[n];
    for(int i = 0;i<n;i++){
        int start,end;
        cin>>start>>end;
        mapping_of_movie_end_and_start[i] = make_pair(end,start);
    }
    
    // Main logic
    sort(mapping_of_movie_end_and_start,mapping_of_movie_end_and_start+n);
    int maximum_movies = 0,previous_movie_end_time = 0;
    for(auto movie:mapping_of_movie_end_and_start){
        if(previous_movie_end_time<=movie.second){
            maximum_movies++;
            previous_movie_end_time = movie.first;
        }
    }
    cout<<maximum_movies<<"\n";
}

int main(){
    int t = 1;
    // cin>>t;
    while (t--){
        solve();
    }
    
}