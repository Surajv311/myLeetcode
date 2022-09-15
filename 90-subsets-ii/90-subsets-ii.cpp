class Solution {
public:
    
    
    void fun(vector<vector<int>> &ans, vector<int> nums, vector<int> & temp, int ind){
        
        ans.push_back(temp);
        
        
        for(int i=ind; i < nums.size(); i++){
            
            // if same element... to prevent duplicate..
            if(i!=ind and nums[i]==nums[i-1]) continue;
            
            temp.push_back(nums[i]);
            fun(ans,nums,temp,i+1);
            temp.pop_back();
        }
        
        
    }
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> ans; 
        int ind =0; 
        vector<int> temp;
        sort(nums.begin(),nums.end());
        fun(ans, nums, temp, ind);
        
        return ans;
    }
};