#include <bits/stdc++.h>
using namespace std;

vector<int> BFS(int V, vector<int> ListA[]){
    vector<int> Vis(V,0);
    Vis[1]=1;
    vector<int> B;
    queue<int> Q;
    while(!Q.empty()){
        int node=Q.front();
        Q.pop();
        B.push_back(node);
        for(auto it:ListA[node]){
            if(Vis[it]!=1){
            Vis[it]=1;
            Q.push(it);
        }

    }
}
return B;
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
    vector<int> ans=BFS(n,adj);
for(auto it: ans){
    cout<<it;
}   
    return 0;
}