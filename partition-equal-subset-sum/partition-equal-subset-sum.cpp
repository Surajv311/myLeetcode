class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
//          we must use dp 
        
        
        int n = nums.size(); 
        
        int W = accumulate(nums.begin(),nums.end(),0);
        
        if(W&1) return false; 
        else{
            
        W = W/2; 
        
       int dp[n+1][W+1]; 
        
        for(int i = 0 ; i < n+1;i++){
            
            for(int j = 0 ; j < W+1;j++)
            {
                
                if(i ==0 or j==0)
                {
                    
                    dp[i][j]=false;
                    
                    if(j==0) dp[i][j] = true; 
                    
                }
                
                else{
                    
                    if(nums[i-1]>j) dp[i][j] = dp[i-1][j];
                    
                    else dp[i][j] = dp[i-1][j-nums[i-1]] or dp[i-1][j];                 
                }
          
            } 
            
            
        }
        
        return dp[n][W];
        
            
            
        }
        
 
    }
};