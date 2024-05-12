class Solution {
public:
    
    // normal recursion
//     int fun(vector<int>& nums, int n){
//         if(n<0) return 0;
        
//         int a = nums[n] + fun(nums, n-2);
//         int b = fun(nums, n-1);
//             return max(a,b);
//     }
    
//     int rob(vector<int>& nums) {
//         int n = nums.size()-1; 
//         return fun(nums, n);
//     }
    
    
     int dp[10001]; 
    
    int fun(vector<int> &nums,int n,int &ans){
        
        if(n<0) return 0;
        
        if(dp[n]!=-1) return dp[n];
        
        int a =  nums[n] + fun(nums,n-2,ans);
        int b = fun(nums,n-1,ans); 
        
        ans = max(a,b);
        dp[n] = ans; 
        
        return dp[n];
    }
    int rob(vector<int>& nums) {
        
        if(nums.size()==1) return nums[0];
       
        memset(dp,-1,sizeof(dp));
        int n = nums.size();
        int ans = 0;
        fun(nums,n-1,ans);
      
        return ans;  
        }
};