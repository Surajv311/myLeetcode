class Solution {
public:
    int maxProduct(vector<int>& nums) {
    
        
        if(nums.size()==1) return nums[0];
        
        int n = nums.size(); 
        
        int mins=0, maxs=0, ans = INT_MIN; 
        
        for(int i = 0 ; i < n; i++){
            
            if(nums[i]<0) swap(mins,maxs);
            
            maxs = max(maxs*nums[i],nums[i]);
            mins = min(mins*nums[i],nums[i]);    
            
            ans = max(ans,maxs);
 
        }
        
        return ans; 
        
    }
};