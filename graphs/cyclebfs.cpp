#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool detect(int src, vector<int> adj[], int vis[]) {
        vis[src] = 1;
        queue<pair<int, int>> qt;
        qt.push({src, -1});
        while (!qt.empty()) {
            int node = qt.front().first;
            int parent = qt.front().second;
            qt.pop(); // You need to remove the front element from the queue
            for (auto it : adj[node]) {
                if (vis[it] != 1) {
                    vis[it] = 1;
                    qt.push({it, node});
                } else if (parent != it) {
                    // Cycle is present
                    return true;
                }
            }
        }
        return false;
    }

public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Initialize them as unvisited
        int vis[V];
        memset(vis, 0, sizeof(vis));

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (detect(i, adj, vis))
                    return true;
            }
        }
        return false;
    }
};

int main() {
    // V = 4, E = 2
    vector<int> adj[4] = {{}, {2}, {1, 3}, {2}};
    Solution obj;
    bool ans = obj.isCycle(4, adj);
    if (ans)
        cout << "1\n";
    else
        cout << "0\n";
    return 0;
}
