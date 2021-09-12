class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size(); 
       
        int x = INT_MAX; int ans = INT_MIN; 
        
        for(int i = 0 ; i < n ; i++){
            x = min(x, prices[i]);
            ans = max(ans, abs(prices[i]-x));
        }
        
        return ans;        
    }
};