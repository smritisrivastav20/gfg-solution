//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(vector<int>adj[],int s,vector<bool>&visited, vector<bool>&recst)
    {
        visited[s]=true;
        recst[s]=true;
        for(auto u:adj[s])
        {
            if(visited[u]==false && dfs(adj,u,visited,recst))
            return true;
            else if (recst[u]==true)
            return true;
        }
        recst[s]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool>visited(V,0);
        vector<bool>recst(V,0);
        for(int i=0;i<V;i++)
        {
            if(visited[i]==false)
            if(dfs(adj,i,visited,recst)==true)
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends