class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> ump; 
        
        
        for (auto i:nums){
            ump[i]++; 
        }
        
        for(auto i:nums)
        {
            if(ump[i]>1) {
                return 1;
            }
        }
        
        return 0; 
        
    }
};