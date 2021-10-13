class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        int x,y ; x = INT_MAX; y = INT_MAX;
        
        for(auto i:nums){
            
         if(i<=x) x = i; // storing the expected first smallest, then second largest... and so on... 
        
         else if(i<=y) y = i;
            
         else return true;
            
        }
        
        return false;
    }
};