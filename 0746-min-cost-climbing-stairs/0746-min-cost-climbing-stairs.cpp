class Solution {
public:
    
//     int fun(vector<int>& dp, vector<int> cost, int n){
//         if(n<0) return 0; 
//         if(n==0 or n==1) return cost[n]; 
//         if(dp[n]!=0) return dp[n]; 
//         dp[n] = cost[n]+ min(fun(dp,cost,n-1), fun(dp, cost,n-2));
//         return dp[n];          
//     }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size(); 
        // vector<int> dp(n);
        // int a = fun(dp, cost, n-1);
        // int b = fun(dp, cost, n-2);
    // return min(a,b);
        
        for(int i = 2 ; i < n ; i++){
            
            cost[i] += min(cost[i-1], cost[i-2]);
        }
        
        return min(cost[n-1], cost[n-2]);
    
    }
};