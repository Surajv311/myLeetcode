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
        
        
        /*
        
        for case of not using a map ~ using sorting + 2 pointer ~ o(nlogn)
        
         int n = nums.size();
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; ++i) {
            arr[i] = make_pair(nums[i], i);
        }
        sort(arr.begin(), arr.end()); // Sort arr in increasing order by their values.
        int left = 0, right = n- 1;
        while (left < right) {
            int sum2 = arr[left].first + arr[right].first;
            if (sum2 == target) 
                return {arr[left].second, arr[right].second};
            if (sum2 > target)
                right -= 1; // Try to decrease sum2
            else
                left += 1; // Try to increase sum2
        }
        return {};
        
        
        */
        
    }
};