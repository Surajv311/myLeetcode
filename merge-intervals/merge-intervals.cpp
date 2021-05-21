class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        // brute force approach is o(n^2) after sorting ~ o(nlogn)
        
        // optimal is o(n) after sorting 
        
        vector<vector<int>> ans; 
        if(intervals.size()==0){
            return ans;
        }
        
       
        sort(intervals.begin(), intervals.end());
        
        vector<int> start = intervals[0]; 
        
        for(auto it: intervals){
            
            if(start[1]>=it[0]){
                start[1] = max(start[1], it[1]);
            }
            else{
                ans.push_back(start);
                start = it; 
            }
            
        }
        
        // pushing the last node 
        
        ans.push_back(start);
        
        return ans;
        
        
        
        
    }
};