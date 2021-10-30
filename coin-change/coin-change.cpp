class Solution {
public:
    
    // just ref
   int dp[10000 + 1][12 + 1];
    
    int fun(vector<int> wt, int w, int n)
    {
        for (int i = 0; i < w + 1; i++) {
            for (int j = 0; j < n + 1; j++) {
                if (i == 0 || j == 0) {
                    dp[i][j] = (i == 0) ? 0 : INT_MAX - 1;
                }
            }
        }
        
         for (int i = 1; i < w + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                if (wt[j - 1] > i) 
                    dp[i][j] = 0 + dp[i - 0][j - 1];
                else 
                    dp[i][j] = min(0 + dp[i - 0][j - 1], 1 + dp[i - wt[j - 1]][j - 0]);
            }
        }
        
                return dp[w][n];
    }
        
//         for (int i = 1; i < w + 1; i++) {
//             for (int j = 1; j < n + 1; j++) {
//                 if (wt[j - 1] > i) 
//                     dp[i][j] = 0 + dp[i - 0][j - 1];
//                 else 
//                     dp[i][j] = min(0 + dp[i - 0][j - 1], 1 + dp[i - wt[j - 1]][j - 0]);
//             }
//         }
        
//         return dp[w][n];
//     }
    
    
    
    int coinChange(vector<int>& coins, int amount) {
        
//         int m = coins.size(); int n = amount; 
//         int dp[m+1][n+1];
        
//         for(int i = 0 ; i < n+1; i++){
//             dp[0][i] = INT_MAX-1; 
//         }
        
//                 for(int i = 0 ; i < n+1; i++){
//                     (i%coins[i]==0) dp[1][i] = j/coins[i-1]; 
                    
//                     else dp[i][j] = INT_MAX-1; 
//         }
        
         
//                 for(int i = 2 ; i < m+1; i++){
//             dp[i][0] = 0; 
//         }
        
//             for(int i =2 ; i < m+1; i++)
//             {
//                 for(int j = 0 ; j < n+1 ; j++){
//                     if(wt[i]<=j){
//                         dp[i][j] = 1 + min(dp[i][j], dp[i][j-wt[i]]);
//                     }
//                     else{
//                            dp[i][j] = 1 + max(dp[i-q][j]); 

//                     }
//                 }
                
//             }    
        
//         return dp[m][n]; 
        
        memset(dp, -1, sizeof(dp));
        int x = fun(coins, amount, coins.size());
        return x == INT_MAX - 1 ? -1 : x;  
        
        
    }
};