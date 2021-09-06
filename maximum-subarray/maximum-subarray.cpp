class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     
//          we use kadane's algo
        
        int x = INT_MIN; 
        
        int sum = 0; 
        
        for(int i = 0 ; i < nums.size(); i++){
            
            sum+=nums[i]; 
            
            if(sum<nums[i]){
                
                sum = nums[i];                 
            }
            
            x = max(x,sum);           
    
        }

        return x; 
    }
};