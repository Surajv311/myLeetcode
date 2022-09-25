class Solution {
public:
    bool canJump(vector<int>& nums) {
        
//         int reach = 0; 
        
//         for(int i = 0; i <nums.size();i++){
            
//             if(i>reach) return false;
            
//             reach = max(reach,i+nums[i]);
            
//         }
        
//         return true;      
        
        
        // for practice
        
        int ind = 0; 
        
        for(int i = 0; i < nums.size(); i++){
        
            if(i>ind) return false; 
            ind = max(ind, i+nums[i]);
            
        } 
        
        return true;
        
    }
};