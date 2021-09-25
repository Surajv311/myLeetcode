class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        vector<int> dp(n + 1);  // dp[i] is minimum cost to reach to i_th floor
        for (int i = 2; i <= n; i++) {
//             starting from i=2... 
            int x = dp[i - 1] + cost[i - 1];  // when we go only 1 step 
            int y = dp[i - 2] + cost[i - 2];  // when 2 steps... 
            dp[i] = min(x, y);
        }
        return dp[n];
        
    }
};