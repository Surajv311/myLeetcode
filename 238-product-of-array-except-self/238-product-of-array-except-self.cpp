class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        
        // multiply left and right sides...
        
        int t = 1; 
        vector<int> res(nums.size()); 
        
        for(int i = 0; i < nums.size(); i++)
        {
            res[i] = t; 
            t*=nums[i]; 
        }
        
        
        t = 1; // re initialising 
        
                for(int i = nums.size()-1; i >= 0; i--)
        {
            res[i] *= t; 
            t*=nums[i]; 
        }
        
        return res; 
        
    }
};