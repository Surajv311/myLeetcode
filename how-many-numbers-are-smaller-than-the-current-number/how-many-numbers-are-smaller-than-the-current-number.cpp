class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
//          using maps 
        
        unordered_map<int,int> mp;
        
        vector<int> test = nums;
        
        sort(test.begin(), test.end());

        int n = nums.size(); 
                
        for(int i = 0 ; i < n; i++){
            if(mp.find(test[i])==mp.end()) // means its unique in array...
                 mp[test[i]] = i;
        }
        
        vector<int> ans(n); 
        
        for(int i = 0 ; i < n; i++){
            ans[i] = mp[nums[i]];
        }
        
        return ans; 
    }
};