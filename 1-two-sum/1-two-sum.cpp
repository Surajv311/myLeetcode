class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp; 
        vector<int> ans; 
        for(int i = 0 ; i< nums.size(); i++){
            
            int x = (target-nums[i]); // not using abs() since no. can be negative 
            
            if(mp.find(x)!=mp.end()){
                // means no. has been found 
                ans.push_back(i);
                ans.push_back(mp[x]);
            
            }
            
            mp[nums[i]] = i; 
            
        }
        
        return ans; 
        
        
    }
};