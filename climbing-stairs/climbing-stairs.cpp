class Solution {
public:
    int climbStairs(int n) {
     
//         simlpe fibonacci no. implementation... observe o/p... 
     vector<int> dp(n+1,0);
        
        if(n==1) return 1;
        if(n==2) return 2; 
        
     dp[0]=0;
     dp[1]=1;
     dp[2]=2; 
     for(int i=3;i<n+1;i++)
     {
         dp[i]=dp[i-1]+dp[i-2];
     }
     return dp[n];
        
    }
};