class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
vector<int> dir = {-1,0,1,0,-1}; // for directions: {-1,0},{0,1},{1,0},{0,-1}..
        
        queue<pair<int,int>> q; // would store rotten oranges...
        
        int fror = 0 ; // fresh oranges... 
        int m = grid.size(), n = grid[0].size(); 
        
        for(int i = 0 ; i < m;i++){
            for(int j = 0 ; j < n;j++){
                
                if(grid[i][j]==1) fror++;
                
                if(grid[i][j]==2) q.push({i,j});
//                     means rotten oranges... 
            }
        }
        
        int ans = -1; // since initially rotten oranges started at 0... 
        
//             now using BFS...
                 
/* initially maybe our 'q' queue may have only one rotten orange..hence our size 'sz' would be 1... but with bfs we would be traversing to nearby fresh oranges and rotting it, and decrementing our 'fror' ~~ fresh oranges... and also increment our 'ans' once in one itearation our oranges have rotten...
*/
    while(!q.empty()){ 
            int sz = q.size();
            
            while(sz--){
            
            pair<int,int> p = q.front(); 
            q.pop();
                
           for(int i = 0 ; i <4 ;i++){ // for directions...
               
               int x = p.first + dir[i];
               int y = p.second + dir[i+1];
//                it would help us traverse in all 4 directions... 
               
               if(x>=0 and x<m and y>=0 and y<n and grid[x][y]==1){
                   grid[x][y] = 2;
                   fror--;
                   q.push({x,y});
               }
           } 
        }
           ans++; 
      
        }
        
//         if still fresh oranges left...
        
        if(fror>0) return -1; 
        
        if(ans==-1) return 0; 
        
        return ans; 
    }
};