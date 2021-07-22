class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        
         int cnt = 0 ; 
      int ans = 0; 
      for(int i = 0 ; i < nums.size() ;i++){
          if(i==0 or nums[i-1]<nums[i]) ans = max(ans,++cnt);
          else cnt = 1; 
      }
      
      return ans; 
        
    }
};