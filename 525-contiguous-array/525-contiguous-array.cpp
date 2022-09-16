class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        
        for(int i = 0 ; i < nums.size();i++) 
        {
            if(nums[i]==0) nums[i]=-1; 
        }
        
        
        int r = 0 ; 
        int sum = 0 ;
        unordered_map<int,int> mp; 
        
        mp[0] = -1; // initialised for 0 sum 
        
        for(int i = 0; i< nums.size(); i++){
            
            sum+=nums[i]; 
            
            if(sum==0) r = max(r,i);
            
            if(mp.find(sum)!=mp.end()){
                r = max(r,i-mp[sum]);
            } 
            
            else mp[sum] = i; 
            
        }
        
        return r; 
        
    }
};