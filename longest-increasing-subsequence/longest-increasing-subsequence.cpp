class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> dp(n+1,1);
        
        int ans = INT_MIN; 
        
        for(int i = 1 ; i < n ; i++ )
            for(int j = 0 ; j < i ; j++)
                if(nums[i]>nums[j] and dp[j]>=dp[i]) dp[i] = dp[j]+1;
        
        ans = *max_element(dp.begin(), dp.end());
        
        return ans; 
    }
};