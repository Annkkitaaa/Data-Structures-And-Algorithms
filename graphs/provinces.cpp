class Solution {
private:
    void dfs(int node, vector<int> ListAd[], vector<int>& Vis) {
        Vis[node] = 1;
        for (int neighbor : ListAd[node]) {
            if (!Vis[neighbor]) {
                dfs(neighbor, ListAd, Vis);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<int> ListAd[V];
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (isConnected[i][j] == 1) {
                    ListAd[i].push_back(j);
                }
            }
        }
        int count = 0;
        vector<int> Vis(V, 0);
        for (int i = 0; i < V; i++) {
            if (!Vis[i]) {
                count++;
                dfs(i, ListAd, Vis);
            }
        }
        return count;
    }
};
