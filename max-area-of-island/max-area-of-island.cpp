class Solution {
public:
    
    void fun(vector<vector<int>>& grid,int i, int j , int m, int n, int&count,int &res ){
        
        if(i<0 or i>=m or j<0 or j>=n or grid[i][j]==0) return;
        
        grid[i][j] = 0; 
        
        count++; 
        
        fun(grid,i-1,j,m,n,count,res);
        fun(grid,i,j-1,m,n,count,res);
        fun(grid,i+1,j,m,n,count,res);
        fun(grid,i,j+1,m,n,count,res);
            
        res = max(res,count);
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int m = grid.size(); 
        int n = grid[0].size(); 
        
        int res = 0, count = 0; 
        
        for(int i = 0; i < m;i++){
            for(int j = 0; j < n ; j++){
                count = 0; 
                fun(grid,i,j,m,n,count,res);
            }
        }
        
        return res; 
    }
};