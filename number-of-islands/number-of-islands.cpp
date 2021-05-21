class Solution {
public:
    
      
    void dfs(vector<vector<char>> & grid, int x, int y, int row, int col)
    {
        
        // check for corner position of matrix...
        
        if(x>=row or x < 0 or y >=col or y<0 or grid[x][y]!='1'){
            return; 
        }
        
        grid[x][y]='2'; // marking with 2.. means its land and its visited... 
        
        // chekcing in all 4 directions... 
        dfs(grid, x+1, y, row, col);
         dfs(grid, x-1, y, row, col);
          dfs(grid, x, y+1, row, col);
           dfs(grid, x, y-1, row, col);

         //  dfs(grid, x+1, y+1, row, col);
         // dfs(grid, x-1, y-1, row, col);
         //  dfs(grid, x-1, y+1, row, col);
         //   dfs(grid, x+1, y-1, row, col);
        
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        
            int row = grid.size(); 
        
        int col = grid[0].size(); 
        
        // if row zero then false...
        
        if(row==0){
            return 0;
        }
        
        int count =0; 
        
        for(int i = 0 ; i < row; ++i){
            
            for(int j = 0 ; j < col ; ++j){
                
                if(grid[i][j]=='1'){
                
               dfs(grid, i , j , row, col);
                ++count; 
                }
            }
        }
        
        return count; 
        
    }
};