class Solution {
public:
    int dp[1007][1007]; 
    
    int fun(vector<vector<int>>&grid,int m,int n)
    {
        
        
         if(m==0 and n==0) return grid[m][n];  
        else if(m<0 or n<0) return INT_MAX/2;
/*  since if m==0 and n!=0 then our path would be moving in the leftward direction everytime ~one direction towards the 0,0...,  than zig zag, hence we must put m<0 and n<0 rather than putting a condition like if((m==0 and n!=0) or (m!=0 and n==0))...*/
        
        if(dp[m][n]!=-1) return dp[m][n];
        
        return dp[m][n] = grid[m][n] + min(fun(grid,m-1,n), fun(grid,m,n-1));
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        
  /*
        int m = grid.size(); // rows... 
        int n = grid[0].size(); 
        
        vector<vector<int>> dp(m,vector<int>(n,0)); 
        
        dp[0][0] = grid[0][0]; 
        
//         intialising the rows & columns of dp table...
        
//         rows 
        
        for(int i = 1 ; i < m ; i++ )
        {
            dp[i][0] = dp[i-1][0] + grid[i][0]; 
        }
        
        
        // cols
              for(int j = 1 ; j < n ; j++ )
        {
            dp[0][j] = dp[0][j-1] + grid[0][j]; 
        }
        
        
//         now dp 

        
        for(int i = 1 ; i < m ; i++)
        {
            for(int j = 1 ; j < n ; j++){
                        
                dp[i][j] = min(dp[i][j-1],dp[i-1][j]) + grid[i][j]; 
                
            }
        }
        
        return dp[m-1][n-1];
        
        */
        
        int m = grid.size(); 
        int n = grid[0].size();
        
        memset(dp,-1,sizeof(dp));
        return fun(grid,m-1,n-1);
        
        /* note that greedy approach won't work...*/
        
    }
};