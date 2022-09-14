class Solution {
public:
    
    // void fun(vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& subs) {
    //     subs.push_back(sub);
    //     for (int j = i; j < nums.size(); j++) {
    //         sub.push_back(nums[j]);
    //         subsets(nums, j + 1, sub, subs);
    //         sub.pop_back();
    //     }
    // }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        // vector<int> temp; 
        // vector<vector<int>> ans; 
        
//         using bits
        
//         int n = nums.size(); 
        
//         for(int i = 0 ; i < (1<<n); i++ )
//         {
//             for(int j = 0 ; j < n;j++){
                
//                 if(i&(1<<j)) temp.push_back(nums[j]);
                
//             }
            
//             ans.push_back(temp);
//             temp.clear();
//         }
        
//      return ans;    
        
        //recursive
        // fun();
        
        
        // iterative approach
        
        
        vector<vector<int>> ans; 
        ans.push_back({});
        
        for(auto x:nums){
            
            int n = ans.size(); 
            
            for(int i = 0 ; i < n ;i++){
                ans.push_back(ans[i]);
                ans.back().push_back(x);
            }
            
        }
        
        return ans; 
        
    }
};