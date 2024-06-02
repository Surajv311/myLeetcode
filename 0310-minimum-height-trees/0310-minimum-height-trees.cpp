class Solution {
public:
vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
    if(n == 1) return {0}; // Special case: only one node, return it as the MHT root
    if(n == 2) return {edges[0][0], edges[0][1]}; // Special case: only two nodes connected by an edge

    vector<int> adj[n];
    for(auto i: edges){
        adj[i[0]].push_back(i[1]);
        adj[i[1]].push_back(i[0]);
    }

    vector<int> indeg(n,0);
    for (auto i : adj) {
        for (auto j : i) indeg[j]++;
    }

    vector<int> ans; 
    queue<int> q;

    for(int i = 0; i < indeg.size(); i++){
        if(indeg[i]==1){ 
            q.push(i); // pushing the node i 
            indeg[i]--;
        }
    }

    while(!q.empty()){
        int curr_size = q.size(); // Get the current size of the queue

        // Check if the current level contains only 1 or 2 nodes
        if (n <= 2) {
            while (!q.empty()) {
                ans.push_back(q.front());
                q.pop();
            }
            return ans;
        }

        // Process all nodes in the current level
        for(int i = 0 ; i < curr_size; i++){
            int node = q.front(); 
            q.pop();
            for(auto neighbor : adj[node]){
                indeg[neighbor]--;
                if(indeg[neighbor] == 1) // If the neighbor becomes a leaf after removal
                    q.push(neighbor);
            }
            n--; // Decrease the total count of nodes
        }
    }

    // After the while loop, the remaining nodes in the queue are the roots of MHTs
    while (!q.empty()) {
        ans.push_back(q.front());
        q.pop();
    }

    return ans;
}

};