class Solution {
public:
    
    int fun(int n, int &count, vector<int> &dp){
        
        if(n==0 or n==1) return 1; 
        
        if(dp[n]!=-1) return dp[n]; 
        
        int  x =0; 
        for(int i = 1 ; i <= n; i++){
        x += fun(i-1,x,dp)* fun(n-i,x,dp);
        dp[n] = x; 
        }
        
        return dp[n]; 
        
    }
    
    int numTrees(int n) {

//         memoization 

        vector<int> dp(n+1,-1); 
        int z=0;
        return fun(n,z,dp);
        
        
        
        /*
//         concept of catalan numbers ... dp 

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
        */
    }
};