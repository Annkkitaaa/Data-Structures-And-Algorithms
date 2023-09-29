#include <bits/stdc++.h>
using namespace std;
 
void dfs(int node,vector<int> adj[],vector<int> &vis,vector<int> &ls){
        vis[node]=1;
        ls.push_back(node);
        for(auto it: adj[node]){
            if(vis[it]!=1){
                dfs(it,adj,vis,ls);
            }
        }
}
vector<int> DFS(int n,vector<int> adj[]){
    vector<int> vis(n+1,0);
    vector<int> ls;
    int start=1;
    dfs(start,adj,vis,ls);
    return ls;
}

void adjacencyList(int n,int m,vector<int> adj[]){
     cin.ignore();
    
    for(int i=0;i<m;i++){
        int u;
        int v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
   
}
int main(){
    int n;
    cout<<" Enter the number of nodes: ";
    cin>>n;
    int m;
    cout<<" number of edges : ";
    cin>>m;
    
    vector<int> adj[n + 1];
    adjacencyList(n, m, adj);
    vector<int> ans=DFS(n,adj);
for(auto it: ans){
    cout<<it;
}   
    return 0;
}