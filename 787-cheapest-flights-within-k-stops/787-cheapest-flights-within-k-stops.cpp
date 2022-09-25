class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
       vector<vector<int>>arr(flights);
        
    
        vector<int> dist(n,1e7);
        dist[src] = 0; 
        
        
        for(int i = 0 ; i < k+1; i++){
            // doing k+1 since, thats how it will work...~ bellman ford
            
            vector<int> temp(dist);
            
            for(auto j:arr){
                
                int a,b,d; // point a to b with distance d 
                a=j[0]; b=j[1]; d=j[2]; 
                
                temp[b] = min(temp[b], dist[a] + d );
                
                
            }
            
            dist = temp; 
            
        }
        
        
        return dist[dst]==1e7?-1:dist[dst];
           
    }
};