class Solution {
public:
    
    void fun(vector<vector<int>>&ans, vector<int> nums, int l, int r){
        
        if(l==r){
            ans.push_back(nums);
            return;
        }
        
        for(int i = l ; i <= r;i++ )
        {
            swap(nums[i],nums[l]);
            fun(ans, nums, l+1, r); // would make the tree...
            swap(nums[i],nums[l]); // backtrack...
        }
        
        return;
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans; 
        
        int n = nums.size(); 
        n--; 
        fun(ans,nums,0,n);
        
        return ans; 
    }
};