class Solution {
public:
    
    void totalflips(int basenode, vector<int>vis, vector<pair<int,int>> adj[], int &count)
    {   
        // 157ms runtime - and giving memory limit exceeded - probably due to multiple recursive calls stack overflow 
//         vis[basenode] = 1; 
//         for(auto node_pair: adj[basenode]){
//             int node = node_pair.first;
//             int edge_nature = node_pair.second;
//             if(!vis[node]){ 
//                 if(edge_nature==1) count++;
//                 totalflips(node, vis, adj, count);
//             }
//         } 
        
        // 15ms runtime - using iterative dfs 
            stack<int> stk;
    stk.push(basenode);
    vis[basenode] = 1;

    while (!stk.empty()) {
        int current = stk.top();
        stk.pop();

        for (auto node_pair : adj[current]) {
            int node = node_pair.first;
            int edge_nature = node_pair.second;
            if (!vis[node]) {
                if (edge_nature == 1) count++;
                stk.push(node);
                vis[node] = 1;
            }
        }
    }
        
        return;
    }
    
    int minReorder(int n, vector<vector<int>>& connections) {
        
        // creating adjacency list
        
        vector<pair<int,int>> adj[n]; // vertices is n here, array of vectors
        
        for(auto i:connections){
            adj[i[0]].push_back({i[1],1}); // given graph edge exist so weighing as 1, if we plan to reverse it towards root node
            adj[i[1]].push_back({i[0],0});
        }
        
        int basenode = 0; 
        vector<int>vis(n,0);
        int count = 0; 
        totalflips(basenode, vis, adj, count);
        return count;
        
    }
};