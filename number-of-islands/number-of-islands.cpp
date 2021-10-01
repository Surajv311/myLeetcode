class Solution {
public:
    
    void fun(vector<vector<char>>& grid,int i, int j, int m , int n){
        
        if(i<0 or i>=m or j<0 or j>=n) return; 
        
        if(grid[i][j]!='1') return; //means could be 2 or 0...
        
        grid[i][j]= '2';
        
        fun(grid, i+1,j,m, n);
        fun(grid, i,j+1,m, n);
        fun(grid, i-1,j,m, n);
        fun(grid, i,j-1,m, n);
        
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int m = grid.size(); int n = grid[0].size(); 
        
        int count = 0; 
        
        for(int i = 0 ; i < m; i++){
            
            for(int j = 0 ; j < n; j++)
            {             
                if(grid[i][j]=='1'){
                    fun(grid, i,j,m, n);
                    count++;
                }   
            }
            
        }
                
        return count; 
    }
};