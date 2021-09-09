class Solution {
public:
    
  
    int fun(int m, int n, vector<vector<int>> dp){
    
        if(m<0 or n<0){
            return 0; 
        }
        
        else if(m==0 or n==0){
// here either m==0 or n==0 condition because, consider a snapshot when you are at the point (0,y), now from here when fun() calls, then for fun(m-1,n) ==> this would give use 0 as we would move up and out of matrix... and would conntinue to do so, whereas fun(m,n-1) would help us shift side by side, and the moment we reach 0,0, we would be added with 1... hence the process would happen for all paths...*/
            
            return 1; 
        }
        
        else if(dp[m][n]!=-1) return dp[m][n]; 
        
        dp[m][n] = fun(m-1,n,dp) + fun(m,n-1,dp);
        
    return dp[m][n];
    }
    
    int uniquePaths(int m, int n) {

//         memoization top down 
        // vector<vector<int>> dp(m,vector<int>(n,-1));
        // return fun(m-1,n-1, dp);
        
        
//         bottom up 
        vector<vector<int>> dp(m, vector<int>(n, 1));
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m - 1][n - 1];
    }
};