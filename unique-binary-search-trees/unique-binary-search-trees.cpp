class Solution {
public:
    int numTrees(int n) {

//         concept of catalan numbers 
         vector<int>dp(n+1,0); 
        
        dp[1]=dp[0]=1; // values at 0 / 1 = 1... 
       
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                dp[i]+=dp[j]*dp[i-j-1]; 
                
//                 catalan no. for n:
                // C(n)= C(i) * C(n-i-1)... where i ~ from 0 to n-1...  
            }
        }
        return dp[n]; 
        
    }
};