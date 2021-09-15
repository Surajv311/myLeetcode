class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> temp; 
        vector<vector<int>> ans; 
        
//         using bits
        
        int n = nums.size(); 
        
        for(int i = 0 ; i < (1<<n); i++ )
        {
            for(int j = 0 ; j < n;j++){
                
                if(i&(1<<j)) temp.push_back(nums[j]);
                
            }
            
            ans.push_back(temp);
            temp.clear();
        }
        
     return ans;    
    }
};