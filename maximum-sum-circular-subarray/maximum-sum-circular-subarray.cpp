class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
      
        int tsum = 0; 
        for(auto x:nums) tsum+=x; 
        
        // sum 
        tsum = accumulate(nums.begin(), nums.end(),0);
        
int cmax=0, cmin=0;
        int ma = nums[0], mi = nums[0]; // not assigning INT_MAX/MIN, since if only 1 element in the array then?... 
        
        for(auto x:nums){
            cmax = max(cmax+x,x);
            ma = max(ma,cmax);
            cmin= min(cmin+x,x); 
            mi = min(mi, cmin);          
        }
        
        
        if(ma>0){
            return max(ma, tsum-mi);
        }
        else return ma; 
        
    }
};