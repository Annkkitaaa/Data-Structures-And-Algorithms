#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> shortestPath(vector<vector<int>>& edges,int N,int M,int src){
        vector<int> adjL[N];
        for(auto it: edges){
            adjL[it[0]].push_back(it[1]);
            adjL[it[1]].push_back(it[0]);
        }

        vector<int> dist(N,1e9);
        

        dist[src]=0;
        queue<int> qt;
        qt.push(src);
        while(!qt.empty()){
            int node=qt.front();
            qt.pop();
            for(auto it: adjL[node]){
                if(dist[node]+1<dist[it]){
                    dist[it]=dist[node]+1;
                    qt.push(it);
                }

            }

        }

        vector<int> ans(N, -1);
        for(int i = 0;i<N;i++) {
            if(dist[i] != 1e9) {
                ans[i] = dist[i]; 
            }
        }
        return ans; 
    }
};

int main(){

int N=9, M=10;
vector<vector<int>> edges= {{0,1},{0,3},{3,4},{4,5},{5,6},{1,2},{2,6},{6,7},{7,8},{6,8}};

Solution obj;
vector<int> ans = obj.shortestPath(edges,N,M,0);

for(int i=0;i<ans.size();i++){
    
    cout<<ans[i]<<" ";
}

return 0;
}