class Solution {
public:
    
    bool dfs(vector<int> adj[], vector<bool> &flag, int node, int start, int end){
        
        flag[node] = true; 
        
        for(auto x: adj[node]){
            
            if(!flag[x])
            {
                flag[x] = true; 
                dfs(adj, flag, x, start, end);
            }
            
            if(flag[start] and flag[end]){
                return true; 
            }
        }

        return false;        
        
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        
//         using dfs
        
        vector<int> adj[n+1];
 
    for(auto x : edges) {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<bool> flag(n+1,false);

        if(edges.size()==0) return true; 
        
        else return dfs(adj, flag, start, start, end);
        
        
    }
};