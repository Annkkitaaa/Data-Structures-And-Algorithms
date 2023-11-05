#include <bits/stdc++.h>
using namespace std;

//find toposort <
class Solution{
    public:
    bool topoSort(int V,vector<int> adj[]){
    int indegree[V]={0};
    for(int i=0;i<V;i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }   

    queue<int> qt;
    for(int i=0;i<V;i++){
        if(indegree[i]==0){
            qt.push(i);
        }
    }

    vector<int> topo;

    while(!qt.empty()){
        int node=qt.front();
        qt.pop();
        topo.push_back(node);
        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                qt.push(it);
            }
        }
        
    }

    if(topo.size()!=V) return true;
    else return false;
}};

int main() {

	//V = 6;
	vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
	int V = 6;
	Solution obj;
	bool ans = obj.topoSort(V,adj);

	cout<<ans<<" ";

	return 0;
}