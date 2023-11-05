#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
vector<int> topoSort(vector<int> adj[],int V){
    int indegree[V] = {0};
		for (int i = 0; i < V; i++) {
			for (auto it : adj[i]) {
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
        for(auto it: adj[node]){
            
                indegree[it]--;
                if(indegree[it]==0) qt.push(it);
            }
        }
    return topo;
    }
    };
    
int main() {

	//V = 6;
	vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
	int V = 6;
	Solution obj;
	vector<int> ans = obj.topoSort(adj,V);

	for (auto node : ans) {
		cout << node << " ";
	}
	cout << endl;

	return 0;
}