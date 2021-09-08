class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        
        int n = nums.size()-1; 
        int i = 0 ; 
        
        int ans=INT_MIN; 
        
        while(i<=n){
            
            int m = (i+n)/2;
            
            
            if(nums[m]< target) {
            
                i = m+1;  
                ans = i; 
            }
            else {
                n = m-1;
                ans = i; 
            } 
                    
        }
        
        return ans; 
        
        
        /*
        
        other approach
        
 return lower_bound(nums.begin(), nums.end(), target) - nums.begin();

*/
        
    }
};