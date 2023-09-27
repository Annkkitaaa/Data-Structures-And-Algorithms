#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<" Enter the number of nodes: ";
    cin>>n;
    int m;
    cout<<" number of edges : ";
    cin>>m;

    cin.ignore();
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u;
        int v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    
    for(int i=1;i<=n;i++){
        cout<<" adjacency list of node "<<i<<":";
        for(auto it:adj[i]){
            cout<<it;
        }
        cout<<endl;
    }
    return 0;
}